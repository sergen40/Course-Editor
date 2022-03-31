#ifndef UNTITLED1_PRECONDITION_H
#define UNTITLED1_PRECONDITION_H

#include <iostream>

using namespace std;


class Precondition {
public:
    string courseCode;
    vector<string> courseDay;
    vector<string> courseSection;

    void setCourseDay(const vector<string>& courseDay) {
        Precondition::courseDay = courseDay;
    }

    void setCourseSection(const vector<string>& courseSection) {
        Precondition::courseSection = courseSection;
    }

    const vector<string>& getCourseDay() const {
        return courseDay;
    }

    void setCourseDay1(const vector<string>& courseDay) {
        Precondition::courseDay = courseDay;
    }

    void setCourseSection1(const vector<string>& courseSection) {
        Precondition::courseSection = courseSection;
    }

    const vector<string>& getCourseSection() const {
        return courseSection;
    }

    const string& getCourseCode() const {
        return courseCode;
    }

    void setCourseCode(const string& courseCode) {
        Precondition::courseCode = courseCode;
    }


    friend ostream& operator<<(ostream& os, const Precondition& precondition) {
        os << "courseCode: " << precondition.courseCode << " courseDay: " << precondition.courseDay.at(0)
            << " courseSection: " << precondition.courseSection.at(0);
        return os;
    }


};

#endif