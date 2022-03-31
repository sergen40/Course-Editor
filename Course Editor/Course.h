#pragma once
//
// Created by okanu on 02/05/2019.
//

#ifndef UNTITLED1_COURSE_H
#define UNTITLED1_COURSE_H

#include <iostream>
#include <string>


using namespace std;

class Course
{
    string code;
    string name;
    int semesterYear;
    int credit;
    bool isCompulsary;
    char section;
    string instructor;
    static int totalCources;

public:
    Course();
    virtual ~Course();

    Course(const string& code, const string& name, int semesterYear, int credit, bool isCompulsary, char section,
        const string& instructor);

    const string& getCode() const;

    void setCode(const string& code);

    const string& getName() const;

    void setName(const string& name);

    int getSemesterYear() const;

    void setSemesterYear(int semesterYear);

    int getCredit() const;

    void setCredit(int credit);

    bool getIsCompulsary() const;

    void setIsCompulsary(bool isCompulsary);

    char getSection() const;

    void setSection(char section);

    const string& getInstructor() const;

    void setInstructor(const string& instructor);

    static int getTotalCources();

    static void setTotalCources(int totalCources);

    friend ostream& operator<<(ostream& os, const Course& course);
};

int Course::totalCources = 0;

Course::Course()
{
}


Course::~Course()
{
}

Course::Course(const string& code, const string& name, int semesterYear, int credit, bool isCompulsary, char section,
    const string& instructor) : code(code), name(name), semesterYear(semesterYear), credit(credit),
    isCompulsary(isCompulsary), section(section), instructor(instructor) {}

const string& Course::getCode() const {
    return code;
}

void Course::setCode(const string& code) {
    Course::code = code;
}

const string& Course::getName() const {
    return name;
}

void Course::setName(const string& name) {
    Course::name = name;
}

int Course::getSemesterYear() const {
    return semesterYear;
}

void Course::setSemesterYear(int semesterYear) {
    Course::semesterYear = semesterYear;
}

int Course::getCredit() const {
    return credit;
}

void Course::setCredit(int credit) {
    Course::credit = credit;
}

bool Course::getIsCompulsary() const {
    return isCompulsary;
}

void Course::setIsCompulsary(bool isCompulsary) {
    Course::isCompulsary = isCompulsary;
}

char Course::getSection() const {
    return section;
}

void Course::setSection(char section) {
    Course::section = section;
}

const string& Course::getInstructor() const {
    return instructor;
}

void Course::setInstructor(const string& instructor) {
    Course::instructor = instructor;
}

int Course::getTotalCources() {
    return totalCources;
}

void Course::setTotalCources(int totalCources) {
    Course::totalCources = totalCources;
}

ostream& operator<<(ostream& os, const Course& course) {
    os << course.code;

    return os;
}


#endif //UNTITLED1_COURSE_H