DROP SCHEMA IF EXISTS COMPANY;

CREATE SCHEMA COMPANY;

USE COMPANY;

CREATE TABLE EMPLOYEE
(
    Eno           CHAR(3)     NOT NULL,
    Ename         VARCHAR(50) NOT NULL,
    Job_type      VARCHAR(50) NOT NULL,
    SupervisorENo CHAR(3),
    Hire_date     DATE        NOT NULL,
    Dno           INT,
    Commission    DEC(10, 2),
    Salary        DEC(7, 2)   NOT NULL,
    PRIMARY KEY (Eno)
);

CREATE TABLE DEPARTMENT
(
    Dno      INT NOT NULL,
    Dname    VARCHAR(50),
    Location VARCHAR(50) DEFAULT 'New Delhi',
    PRIMARY KEY (Dno)
);

ALTER TABLE EMPLOYEE
    ADD CONSTRAINT SupervisorConstraint
        FOREIGN KEY (SupervisorENo) REFERENCES EMPLOYEE (Eno);

ALTER TABLE EMPLOYEE
    ADD CONSTRAINT DepartmentConstraint
        FOREIGN KEY (Dno) REFERENCES DEPARTMENT (Dno);

INSERT INTO DEPARTMENT
VALUES (10, 'Accounting', 'New York'),
       (20, 'Research', 'Dallas'),
       (30, 'Sales', 'Chigago'),
       (40, 'Operations', 'Boston'),
       (50, 'Marketing', 'New Delhi');

INSERT INTO EMPLOYEE
VALUES ('765', 'Martin', 'Sales_man', NULL, '1981-04-22', 30, 1400.00, 1250.00),
       ('756', 'Jones', 'Manager', NULL, '1981-04-02', 20, 0, 2300.00),
       ('752', 'Ward', 'Sales_man', NULL, '1981-02-22', 30, 500, 1300.00),
       ('749', 'Allan', 'Sales_man', NULL, '1981-02-20', 30, 300, 2000.00),
       ('736', 'Smith', 'Clerk', NULL, '1980-12-17', 20, 0, 1000.00),
       ('793', 'Miller', 'Clerk', NULL, '1982-01-23', 40, 0, 1300.00),
       ('792', 'Ford', 'Analyst', NULL, '1981-12-03', 20, 0, 2600.00),
       ('790', 'James', 'Clerk', NULL, '1981-12-03', 30, 0, 950.00),
       ('787', 'Adams', 'Clerk', NULL, '1983-01-12', 20, 0, 1150.00),
       ('784', 'Turner', 'Sales_man', NULL, '1981-09-08', 30, 0, 1450.00),
       ('783', 'King', 'President', NULL, '1981-11-17', 10, 0, 2950.00),
       ('788', 'Scott', 'Analyst', NULL, '1982-12-09', 20, 0, 2850.00),
       ('778', 'Clark', 'Manager', NULL, '1981-06-09', 10, 0, 2900.00),
       ('769', 'Blake', 'Manager', NULL, '1981-05-01', 30, 0, 2870.00);

UPDATE Employee SET SupervisorENo = '769' WHERE Eno = '765';
UPDATE Employee SET SupervisorENo = '783' WHERE Eno = '756';
UPDATE Employee SET SupervisorENo = '769' WHERE Eno = '752';
UPDATE Employee SET SupervisorENo = '769' WHERE Eno = '749';
UPDATE Employee SET SupervisorENo = '790' WHERE Eno = '736';
UPDATE Employee SET SupervisorENo = '788' WHERE Eno = '793';
UPDATE Employee SET SupervisorENo = '756' WHERE Eno = '792';
UPDATE Employee SET SupervisorENo = '769' WHERE Eno = '790';
UPDATE Employee SET SupervisorENo = '778' WHERE Eno = '787';
UPDATE Employee SET SupervisorENo = '769' WHERE Eno = '784';
UPDATE Employee SET SupervisorENo = NULL WHERE Eno = '783';
UPDATE Employee SET SupervisorENo = '756' WHERE Eno = '788';
UPDATE Employee SET SupervisorENo = '783' WHERE Eno = '778';
UPDATE Employee SET SupervisorENo = '783' WHERE Eno = '769';