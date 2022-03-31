#ifndef UNTITLED1_SCHEDULER_H
#define UNTITLED1_SCHEDULER_H

#include "Weekday.h"
#include "Precondition.h"


class Scheduler {

public:
    Weekday weekdays[5];


    Scheduler() {

        weekdays[0].setDayName("Monday");
        weekdays[1].setDayName("Tuesday");
        weekdays[2].setDayName("Wednesday");
        weekdays[3].setDayName("Thursday");
        weekdays[4].setDayName("Friday");

    }

    bool firstCheck(int numberOfClassrooms, int bigclass, int numberOfCourses, int cCourse);

    bool setReserveds(vector<Precondition>, vector<Classroom> classes, vector<Course>* courses);

    bool setBusyCourses(vector<Precondition>, vector<Classroom> classes, vector <Course>* courses);

    Session isAvailable(bool control[], Course course, Session* session);

    bool setOthers(vector<Classroom> classes, vector<Course>* courses);

    void tryToScheduleReserveds(Session*, vector<Precondition> reserveds, vector<Course>* courses,
        int loop, int day, string sessionTime);

    void tryToScheduleUnsuitables(Session*, vector<Precondition> unsuitables, vector<Course>* courses,
        int loop, int day, string sessionTime);
};


bool Scheduler::firstCheck(int numberOfClassrooms, int bigclass, int numberOfCourses, int cCourse) {
    if (((numberOfClassrooms - bigclass) * 10 >= (numberOfCourses - cCourse)) && (bigclass * 10 >= cCourse)) {
        return true;
    }
    else {
        return false;
    }

}

bool Scheduler::setReserveds(vector<Precondition> reserveds, vector<Classroom> classes, vector<Course>* courses) {

    for (int l = 0; l < 5; ++l) {

        weekdays[l].morningSession.allClasses = classes;
        weekdays[l].afternoonSession.allClasses = classes;
        weekdays[l].afternoonSession.setNumberOfLectures(classes.size());
        weekdays[l].morningSession.setNumberOfLectures(classes.size());

    }

    for (int i = 0; i < reserveds.size(); ++i) {

        if (reserveds.at(i).getCourseDay().at(0).compare("Monday") == 0) {

            if (reserveds.at(i).getCourseSection().at(0).compare("Morning") == 0) {

                tryToScheduleReserveds(&weekdays[0].morningSession, reserveds, courses, i, 0, "Morning");

            }
            else {

                tryToScheduleReserveds(&weekdays[0].afternoonSession, reserveds, courses, i, 0, "Afternoon");

            }

        }

        if (reserveds.at(i).getCourseDay().at(0).compare("Tuesday") == 0) {

            if (reserveds.at(i).getCourseSection().at(0).compare("Morning") == 0) {



                tryToScheduleReserveds(&weekdays[1].morningSession, reserveds, courses, i, 1, "Morning");

            }
            else {


                tryToScheduleReserveds(&weekdays[1].afternoonSession, reserveds, courses, i, 1, "Afternoon");

            }

        }
        if (reserveds.at(i).getCourseDay().at(0).compare("Wednesday") == 0) {

            if (reserveds.at(i).getCourseSection().at(0).compare("Morning") == 0) {



                tryToScheduleReserveds(&weekdays[2].morningSession, reserveds, courses, i, 2, "Morning");

            }
            else {


                tryToScheduleReserveds(&weekdays[2].afternoonSession, reserveds, courses, i, 2, "Afternoon");

            }

        }
        if (reserveds.at(i).getCourseDay().at(0).compare("Thursday") == 0) {

            if (reserveds.at(i).getCourseSection().at(0).compare("Morning") == 0) {


                tryToScheduleReserveds(&weekdays[3].morningSession, reserveds, courses, i, 3, "Morning");

            }
            else {



                tryToScheduleReserveds(&weekdays[3].afternoonSession, reserveds, courses, i, 3, "Afternoon");

            }

        }
        if (reserveds.at(i).getCourseDay().at(0).compare("Friday") == 0) {

            if (reserveds.at(i).getCourseSection().at(0).compare("Morning") == 0) {



                tryToScheduleReserveds(&weekdays[4].morningSession, reserveds, courses, i, 4, "Morning");
            }
            else {


                tryToScheduleReserveds(&weekdays[4].afternoonSession, reserveds, courses, i, 4, "Afternoon");
            }

        }

    }

    return false;
}

void Scheduler::tryToScheduleReserveds(Session* session, vector<Precondition> reserveds,
    vector<Course>* courses, int loop, int day, string sessionTime) {

    Course tempCourse;
    Classroom tempClass;

    for (int j = 0; j < courses->size(); ++j) {

        if (courses->at(j).getCode().compare(reserveds.at(loop).getCourseCode()) == 0) {
            tempCourse = courses->at(j);
            courses->erase(courses->begin() + j);
        }
    }

    if (session->getNumberOfLectures() != 0) {

        if (tempCourse.getIsCompulsary()) {
            int counter = 0;

            for (int j = 0; j < session->allClasses.size(); ++j) {

                if (session->allClasses.at(j).getCapacity() == 200) {
                    tempClass = session->allClasses.at(j);
                    session->allClasses.erase(session->allClasses.begin() + j);
                    session->setNumberOfLectures(session->allClasses.size());
                    counter++;
                    session->addToCourses(tempCourse, tempClass);
                    break;
                }
            }


        }
        else {
            int counter = 0;
            int counter2 = 0;

            for (int j = 0; j < session->allClasses.size(); ++j) {

                if (session->allClasses.at(j).getCapacity() == 50) {
                    tempClass = session->allClasses.at(j);
                    session->allClasses.erase(session->allClasses.begin() + j);
                    session->setNumberOfLectures(session->allClasses.size());
                    session->addToCourses(tempCourse, tempClass);
                    counter2++;
                    break;
                }
            }

            if (counter2 == 0) {

                for (int j = 0; j < session->allClasses.size(); ++j) {

                    if (session->allClasses.at(j).getCapacity() == 200) {
                        tempClass = session->allClasses.at(j);
                        session->allClasses.erase(session->allClasses.begin() + j);
                        session->setNumberOfLectures(session->allClasses.size());
                        session->addToCourses(tempCourse, tempClass);
                        counter++;
                        break;
                    }
                }


            }
        }
    }
}

bool Scheduler::setBusyCourses(vector<Precondition> unsuitables, vector<Classroom> classes, vector<Course>* courses) {

    for (int i = 0; i < unsuitables.size(); ++i) {

        for (int j = 0; j < 5; ++j) {

            if (unsuitables.at(i).getCourseDay().size() == 2) {

                if (unsuitables.at(i).getCourseDay().at(0).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(1).compare(weekdays[j].getDayName()) != 0) {
                    tryToScheduleUnsuitables(&weekdays[j].morningSession, unsuitables, courses, i, 4, "Morning");
                    break;
                }
            }
            else if (unsuitables.at(i).getCourseDay().size() == 3) {

                if (unsuitables.at(i).getCourseDay().at(0).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(1).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(2).compare(weekdays[j].getDayName()) != 0) {
                    tryToScheduleUnsuitables(&weekdays[j].morningSession, unsuitables, courses, i, 4, "Morning");
                    break;
                }
            }
            else if (unsuitables.at(i).getCourseDay().size() == 4) {

                if (unsuitables.at(i).getCourseDay().at(0).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(1).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(2).compare(weekdays[j].getDayName()) != 0 && unsuitables.at(i).getCourseDay().at(3).compare(weekdays[j].getDayName()) != 0) {
                    tryToScheduleUnsuitables(&weekdays[j].morningSession, unsuitables, courses, i, 4, "Morning");
                    break;
                }
            }
            else {
                if (unsuitables.at(i).getCourseDay().at(0).compare(weekdays[j].getDayName()) != 0) {
                    tryToScheduleUnsuitables(&weekdays[j].morningSession, unsuitables, courses, i, 4, "Morning");
                    break;
                }
            }
        }
    }
    return false;
}

void Scheduler::tryToScheduleUnsuitables(Session* session, vector<Precondition> unsuitables, vector<Course>* courses, int loop,
    int day, string sessionTime) {

    Course tempCourse;
    Classroom tempClass;

    for (int j = 0; j < courses->size(); ++j) {

        if (courses->at(j).getCode().compare(unsuitables.at(loop).getCourseCode()) == 0) {
            tempCourse = courses->at(j);
            courses->erase(courses->begin() + j);
        }
    }

    if (session->getNumberOfLectures() != 0) {

        if (tempCourse.getIsCompulsary()) {
            int counter = 0;

            for (int j = 0; j < session->allClasses.size() - 1; ++j) {

                if (session->allClasses.at(j).getCapacity() == 200) {
                    tempClass = session->allClasses.at(j);
                    session->allClasses.erase(session->allClasses.begin() + j);
                    session->setNumberOfLectures(session->allClasses.size());
                    counter++;
                    session->addToCourses(tempCourse, tempClass);
                    break;
                }
            }


        }
        else {
            int counter = 0;
            int counter2 = 0;

            for (int j = 0; j < session->allClasses.size(); ++j) {

                if (session->allClasses.at(j).getCapacity() == 50) {
                    tempClass = session->allClasses.at(j);
                    session->allClasses.erase(session->allClasses.begin() + j);
                    session->setNumberOfLectures(session->allClasses.size());
                    session->addToCourses(tempCourse, tempClass);
                    counter2++;
                    break;
                }
            }

            if (counter2 == 0) {

                for (int j = 0; j < session->allClasses.size(); ++j) {

                    if (session->allClasses.at(j).getCapacity() == 200) {
                        tempClass = session->allClasses.at(j);
                        session->allClasses.erase(session->allClasses.begin() + j);
                        session->setNumberOfLectures(session->allClasses.size());
                        session->addToCourses(tempCourse, tempClass);
                        counter++;
                        break;
                    }
                }

            }
        }
    }
}

bool Scheduler::setOthers(vector<Classroom> classes, vector<Course>* courses) {

    for (int i = 0; i < courses->size(); ++i) {
        int counter3 = 0;
        Classroom tempClass;
        Course tempCourse = courses->at(i);

        for (int j = 0; j < 5; ++j) {

            if (weekdays[j].morningSession.isAvailableSession(courses->at(i)) && j != 4) {

                if (tempCourse.getIsCompulsary()) {
                    int counter = 0;

                    for (int k = 0; k < weekdays[j].morningSession.allClasses.size(); ++k) {
                        if (weekdays[j].morningSession.allClasses.at(k).getCapacity() == 200) {
                            tempClass = weekdays[j].morningSession.allClasses.at(k);
                            weekdays[j].morningSession.allClasses.erase(weekdays[j].morningSession.allClasses.begin() + k);
                            weekdays[j].morningSession.setNumberOfLectures(weekdays[j].morningSession.allClasses.size());
                            weekdays[j].morningSession.addToCourses(tempCourse, tempClass);
                            counter++;
                            break;
                        }
                    }

                    if (!(counter == 0))
                        break;

                }
                else {
                    int counter = 0;
                    int counter2 = 0;

                    for (int k = 0; k < weekdays[j].morningSession.allClasses.size(); ++k) {

                        if (weekdays[j].morningSession.allClasses.at(k).getCapacity() == 50) {
                            tempClass = weekdays[j].morningSession.allClasses.at(k);
                            weekdays[j].morningSession.allClasses.erase(weekdays[j].morningSession.allClasses.begin() + k);
                            weekdays[j].morningSession.setNumberOfLectures(weekdays[j].morningSession.allClasses.size());
                            weekdays[j].morningSession.addToCourses(tempCourse, tempClass);
                            counter2++;
                            break;
                        }
                    }

                    if (counter2 == 0) {

                        for (int k = 0; k < weekdays[j].morningSession.allClasses.size(); ++k) {

                            if (weekdays[j].morningSession.allClasses.at(k).getCapacity() == 200) {
                                tempClass = weekdays[j].morningSession.allClasses.at(k);
                                weekdays[j].morningSession.allClasses.erase(weekdays[j].morningSession.allClasses.begin() + k);
                                weekdays[j].morningSession.setNumberOfLectures(weekdays[j].morningSession.allClasses.size());
                                weekdays[j].morningSession.addToCourses(tempCourse, tempClass);
                                counter++;
                                break;
                            }
                        }


                    }
                    else
                        break;
                }
            }
            else if (weekdays[j].afternoonSession.isAvailableSession(courses->at(i))) {

                if (tempCourse.getIsCompulsary()) {
                    int counter = 0;

                    for (int k = 0; k < weekdays[j].afternoonSession.allClasses.size(); ++k) {

                        if (weekdays[j].afternoonSession.allClasses.at(k).getCapacity() == 200) {
                            tempClass = weekdays[j].afternoonSession.allClasses.at(k);
                            weekdays[j].afternoonSession.allClasses.erase(weekdays[j].afternoonSession.allClasses.begin() + k);
                            weekdays[j].afternoonSession.setNumberOfLectures(weekdays[j].afternoonSession.allClasses.size());
                            weekdays[j].afternoonSession.addToCourses(tempCourse, tempClass);
                            counter++;
                            break;
                        }
                    }

                    if (!(counter == 0))
                        break;
                }
                else {
                    int counter = 0;
                    int counter2 = 0;

                    for (int k = 0; k < weekdays[j].afternoonSession.allClasses.size(); ++k) {

                        if (weekdays[j].afternoonSession.allClasses.at(k).getCapacity() == 50) {
                            tempClass = weekdays[j].afternoonSession.allClasses.at(k);
                            weekdays[j].afternoonSession.allClasses.erase(weekdays[j].afternoonSession.allClasses.begin() + k);
                            weekdays[j].afternoonSession.setNumberOfLectures(weekdays[j].afternoonSession.allClasses.size());
                            weekdays[j].afternoonSession.addToCourses(tempCourse, tempClass);
                            counter2++;
                            break;
                        }
                    }

                    if (counter2 == 0) {

                        for (int k = 0; k < weekdays[j].afternoonSession.allClasses.size(); ++k) {

                            if (weekdays[j].afternoonSession.allClasses.at(k).getCapacity() == 200) {
                                tempClass = weekdays[j].afternoonSession.allClasses.at(k);
                                weekdays[j].afternoonSession.allClasses.erase(weekdays[j].afternoonSession.allClasses.begin() + k);
                                weekdays[j].afternoonSession.setNumberOfLectures(weekdays[j].afternoonSession.allClasses.size());
                                weekdays[j].afternoonSession.addToCourses(tempCourse, tempClass);
                                counter++;
                                break;
                            }
                        }

                    }
                    else
                        break;
                }
            }
            else {
                counter3++;
            }
        }

    }

    cout << endl;


    try {
        ofstream myfile;
        myfile.open("schedule.txt");
        for (int k = 0; k < 5; ++k) {
            myfile << weekdays[k] << "\n";
        }

        myfile.close();
    }
    catch (std::exception const& e) {
        cout << "File cannot opened! " << e.what() << endl;
    }


    return 0;
}

#endif