CREATE TABLE person(
 person_id BIGSERIAL PRIMARY KEY,
 name VARCHAR(100) NOT NULL,
 surname VARCHAR(100),
 patronymic VARCHAR(100),
 age INTEGER NOT NULL,
 address VARCHAR(100),
 phone INTEGER,
 email VARCHAR(100),
 vk VARCHAR(100)
);

CREATE TABLE teachers(
 teacher_id INTEGER PRIMARY KEY REFERENCES person(person_id)
);


CREATE TABLE chair (
 chair_id BIGSERIAL PRIMARY KEY,
 name VARCHAR(100) NOT NULL,
 head_of_chair_id INTEGER REFERENCES teachers(teacher_ID) NOT NULL
);
CREATE TABLE degrees(
degree VARCHAR(100) PRIMARY KEY
);

CREATE TABLE department (
 department_id BIGSERIAL PRIMARY KEY,
 department_name VARCHAR(100)  NOT NULL
);

CREATE TABLE department_chair(
 department_id INTEGER NOT NULL REFERENCES department(department_id),
 chair_id INTEGER NOT NULL REFERENCES chair(chair_id)
);

CREATE TABLE subject(
 subject_id BIGSERIAL PRIMARY KEY,
 subject_name VARCHAR(100) NOT NULL,
 chair_id INTEGER NOT NULL REFERENCES chair(chair_id)
);



CREATE TABLE student(
student_id INTEGER PRIMARY KEY REFERENCES person(person_id),
data_of_enrollment DATE NOT NULL,
degree varchar(100) REFERENCES degrees(degree) NOT NULL,
course INTEGER NOT NULL,
department_id INTEGER REFERENCES department(department_id) NOT NULL,
dormitory INTEGER
);


CREATE TABLE groups(
group_no INTEGER REFERENCES student(student_id) PRIMARY KEY,
president_id INTEGER NOT NULL REFERENCES student(student_id)
);

CREATE TABLE student_group(
  student_id INTEGER NOT NULL REFERENCES student(student_id),
  group_no INTEGER NOT NULL REFERENCES groups(group_no)
);

CREATE TABLE chair_teacher (
teacher_id INTEGER REFERENCES chair(chair_id) PRIMARY KEY,
chair_id INTEGER REFERENCES teachers(teacher_id) NOT NULL
);

CREATE TABLE schedule(
 shedule_id BIGSERIAL NOT NULL  PRIMARY KEY,
 day VARCHAR(100) CONSTRAINT day_constraint CHECK (day IN ('monday', 'tuesday', 'wednesday', 'thursday', 'friday', 'saturday')),
 time TIME NOT NULL,
 lecture_hall_no INTEGER NOT NULL,
 building VARCHAR(100),
 teacher_id INTEGER NOT NULL REFERENCES teachers(teacher_id),
 group_no INTEGER NOT NULL REFERENCES groups(group_no),
 subject_id INTEGER NOT NULL REFERENCES subject(subject_id),
 subjrect_type VARCHAR(100) NOT NULL
);
CREATE INDEX ON schedule(group_no);




drop TABLE  chair;
drop TABLE  person;
DROP TABLE teachers;
drop TABLE  department;
drop TABLE department_chair;
DROP TABLE chair_teacher;
drop TABLE  subject;
DROP TABLE student;
DROP TABLE groups;
DROP  TABLE degrees;
drop TABLE  schedule;











COPY person (name, surname, patronymic, age, address, phone, email, vk)  FROM 'person.csv' DELIMITER ',' CSV HEADER;
