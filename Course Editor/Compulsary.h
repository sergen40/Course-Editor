#ifndef UNTITLED1_COMPULSARYCOURSE_H
#define UNTITLED1_COMPULSARYCOURSE_H

#include "Course.h"

class CompulsaryCourse :public Course
{
    bool hasLab;
    static int totalCompulsaries;
public:
    bool isHasLab() const;

    void setHasLab(bool hasLab);

    static int getTotalCompulsaries();

    static void setTotalCompulsaries(int totalCompulsaries);

    CompulsaryCourse(const string& code, const string& name, int semesterYear, int credit, bool isCompulsary, char section, const string& instructor, bool hasLab);

    CompulsaryCourse() {}
    ~CompulsaryCourse() {}

};

int CompulsaryCourse::totalCompulsaries = 0;

CompulsaryCourse::CompulsaryCourse(const string& code, const string& name, int semesterYear, int credit,
    bool isCompulsary, char section, const string& instructor, bool hasLab) : Course(
        code, name, semesterYear, credit, isCompulsary, section, instructor), hasLab(hasLab) {}

bool CompulsaryCourse::isHasLab() const {
    return hasLab;
}

void CompulsaryCourse::setHasLab(bool hasLab) {
    CompulsaryCourse::hasLab = hasLab;
}

int CompulsaryCourse::getTotalCompulsaries() {
    return totalCompulsaries;
}

void CompulsaryCourse::setTotalCompulsaries(int totalCompulsaries) {
    CompulsaryCourse::totalCompulsaries = totalCompulsaries;
}

#endif