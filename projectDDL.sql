CREATE TABLE person(
 person_id BIGSERIAL PRIMARY KEY,
 name VARCHAR(100) NOT NULL,
 surname VARCHAR(100),
 patronymic VARCHAR(100),
 age INTEGER NOT NULL,
 address VARCHAR(100),
 phone VARCHAR(100),
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



CREATE TABLE groups(
group_no INTEGER PRIMARY KEY
);


CREATE TABLE student(
student_id INTEGER PRIMARY KEY REFERENCES person(person_id),
data_of_enrollment DATE NOT NULL,
degree varchar(100) REFERENCES degrees(degree) NOT NULL,
course INTEGER NOT NULL,
department_id INTEGER REFERENCES department(department_id) NOT NULL,
group_no INTEGER REFERENCES groups(group_no) NOT NULL,
dormitory INTEGER
);


CREATE TABLE student_group_president (
 president_id INTEGER NOT NULL REFERENCES student (student_id),
 group_no     INTEGER NOT NULL REFERENCES groups (group_no)
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



drop table student_group_president CASCADE;
drop TABLE  chair CASCADE;
drop TABLE person CASCADE ;
DROP TABLE teachers CASCADE;
drop TABLE  department CASCADE;
drop TABLE department_chair CASCADE;
DROP TABLE chair_teacher CASCADE;
drop TABLE  subject CASCADE;
DROP TABLE student CASCADE;
DROP TABLE groups CASCADE;
DROP  TABLE degrees CASCADE;
drop TABLE  schedule CASCADE;













COPY person (name, surname, patronymic, age, address, phone, email, vk)  FROM '/home/nikolai/QT/person.csv' DELIMITER ',' CSV HEADER;

INSERT INTO degrees VALUES
 ('bachelor'),
 ('master');

INSERT INTO department(department_id, department_name)
VALUES
 ('9', 'DIHCT'),
 ('1', 'DREC'),
 ('3', 'DASR');

INSERT INTO teachers SELECT person_id FROM person ORDER BY person_id LIMIT 30;

INSERT INTO groups VALUES
 ('494'),
 ('496'),
 ('596'),
 ('594'),
 ('231'),
 ('633'),
 ('631'),
 ('317'),
 ('315');


COPY student(student_id, data_of_enrollment, degree, course, department_id, dormitory, group_no) FROM '/home/nikolai/QT/student.csv' DELIMITER ',' CSV HEADER;

