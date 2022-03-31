#ifndef UNTITLED1_ELECTIVECOURSE_H
#define UNTITLED1_ELECTIVECOURSE_H


#include "Course.h"

class ElectiveCourse : public Course
{
    bool hasAttandance;
    static int totalElectives;

public:
    ElectiveCourse() {}
    ~ElectiveCourse() {}

    ElectiveCourse(const string& code, const string& name, int semesterYear, int credit, bool isCompulsary,
        char section, const string& instructor, bool hasAttandance);


    bool isHasAttandance() const;

    void setHasAttandance(bool hasAttandance);

    static int getTotalElectives();

    static void setTotalElectives(int totalElectives);

};

int ElectiveCourse::totalElectives = 0;

ElectiveCourse::ElectiveCourse(const string& code, const string& name, int semesterYear, int credit, bool isCompulsary,
    char section, const string& instructor, bool hasAttandance) : Course(code, name,
        semesterYear,
        credit,
        isCompulsary,
        section,
        instructor),
    hasAttandance(
        hasAttandance) {}

bool ElectiveCourse::isHasAttandance() const {
    return hasAttandance;
}

void ElectiveCourse::setHasAttandance(bool hasAttandance) {
    ElectiveCourse::hasAttandance = hasAttandance;
}

int ElectiveCourse::getTotalElectives() {
    return totalElectives;
}

void ElectiveCourse::setTotalElectives(int totalElectives) {
    ElectiveCourse::totalElectives = totalElectives;
}

#endif