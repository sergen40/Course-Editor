#ifndef UNTITLED1_WEEKDAY_H
#define UNTITLED1_WEEKDAY_H


#include <ostream>
#include "Session.h"


class Weekday
{
public:

    static int afternoonCounter;
    static int morningCounter;

    string dayName;
    Session morningSession;
    Session afternoonSession;
    bool available = true;

    Weekday() {}
    virtual ~Weekday() {}

    string getDayName() {
        return dayName;
    }

    void setDayName(string day) {
        this->dayName = day;
    }

    Session getMorningSession() {
        return morningSession;
    }

    void setMorningSession(Session morning) {
        if (morningCounter == 0)
            this->morningSession = morning;
        else {

            vector<Course> newCourses;
            vector<Classroom> newClasses;

            for (int j = 0; j + 1 == this->morningSession.getCourses().size(); ++j) {
                newCourses.push_back(this->morningSession.getCourses().at(j));
                newClasses.push_back(this->morningSession.getClassrooms().at(j));
            }

            for (int j = 0; j + 1 == morning.getCourses().size(); ++j) {
                newCourses.push_back(morning.getCourses().at(j));
                newClasses.push_back(morning.getClassrooms().at(j));
            }

            this->morningSession.setClassrooms(newClasses);
            this->morningSession.setCourses(newCourses);

        }

        morningCounter++;
    }

    Session getAfternoonSession() {
        return afternoonSession;
    }

    void setAfternoonSession(Session afternoon) {

        if (afternoonCounter == 0)
            this->afternoonSession = afternoon;
        else {

            vector<Course> newCourses;
            vector<Classroom> newClasses;

            for (int j = 0; j + 1 == this->afternoonSession.getCourses().size(); ++j) {
                newCourses.push_back(this->afternoonSession.getCourses().at(j));
                newClasses.push_back(this->afternoonSession.getClassrooms().at(j));
            }

            for (int j = 0; j + 1 == afternoon.getCourses().size(); ++j) {
                newCourses.push_back(afternoon.getCourses().at(j));
                newClasses.push_back(afternoon.getClassrooms().at(j));
            }

            this->afternoonSession.setClassrooms(newClasses);
            this->afternoonSession.setCourses(newCourses);

        }

        afternoonCounter++;
    }

    bool isAvailable() const {
        return available;
    }

    void setAvailable(bool available) {
        Weekday::available = available;
    }

    friend ostream& operator<<(ostream& os, const Weekday& weekday) {
        os << weekday.dayName << " Morning:\n" << weekday.morningSession << "\n" << weekday.dayName << " Afternoon:\n"
            << weekday.afternoonSession;
        return os;
    }

};

int Weekday::afternoonCounter = 0;
int Weekday::morningCounter = 0;


#endif