#ifndef UNTITLED1_SESSION_H
#define UNTITLED1_SESSION_H
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
#include "Classroom.h"

class Session
{
public:
    vector<Classroom> classrooms;
    vector<Classroom> allClasses;
    vector<Course> courses;

private:
    int numberOfLectures = 0;

public:
    Session();
    ~Session();

    int getNumberOfLectures() const;

    void setNumberOfLectures(int numberOfLectures);

    const vector<Course>& getCourses() const;

    void setCourses(const vector<Course>& courses);

    const vector<Classroom>& getClassrooms() const;

    void setClassrooms(const vector<Classroom>& classrooms);

    void addToCourses(Course, Classroom);
    bool isAvailableSession(Course);

    friend ostream& operator<<(ostream& os, const Session& session);

    const vector<Classroom>& getAllClasses() const;

    void setAllClasses(const vector<Classroom>& allClasses);
};

Session::Session()
{
}

Session::~Session()
{
}

void Session::addToCourses(Course course, Classroom classroom) {

    for (int i = 0; i < courses.size(); ++i) {
        if (courses.at(i).getSemesterYear() == course.getSemesterYear()) {
            cout << "Can not create cirriculum " << course.getCode() << " " << courses.at(i).getCode() << endl;
            return;
        }
    }
    this->classrooms.push_back(classroom);
    this->courses.push_back(course);
}

bool Session::isAvailableSession(Course course) {
    if (numberOfLectures != 0) {
        for (int i = 0; i < courses.size(); ++i) {
            if (courses.at(i).getSemesterYear() == course.getSemesterYear()) {
                return false;
            }
        }

    }
    else {
        return false;
    }

    return true;


}

const vector<Course>& Session::getCourses() const {
    return courses;
}

void Session::setCourses(const vector<Course>& courses) {
    Session::courses = courses;
}

const vector<Classroom>& Session::getClassrooms() const {
    return classrooms;
}

void Session::setClassrooms(const vector<Classroom>& classrooms) {
    Session::classrooms = classrooms;
}


ostream& operator<<(ostream& os, const Session& session) {

    for (int i = 0; i < session.classrooms.size(); ++i) {
        os << "   " << session.courses.at(i) << " " << session.classrooms.at(i) << "\n";
    }

    return os;
}

int Session::getNumberOfLectures() const {
    return numberOfLectures;
}

void Session::setNumberOfLectures(int numberOfLectures) {
    Session::numberOfLectures = numberOfLectures;
}

const vector<Classroom>& Session::getAllClasses() const {
    return allClasses;
}

void Session::setAllClasses(const vector<Classroom>& allClasses) {
    Session::allClasses = allClasses;
}




#endif