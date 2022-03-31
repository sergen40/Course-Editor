#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include"Classroom.h"
#include"SmallClassroom.h"
#include"BigClassroom.h"
#include"Course.h"
#include"Precondition.h"
#include"Compulsary.h"
#include"ElectiveCourse.h"
#include"Scheduler.h"
#include<msclr\marshal_cppstd.h>
 
class ReadingFile {
public:
    Scheduler controller;
    vector<Course> allCourses;
    vector<Classroom> allClassrooms;
    vector<Precondition> reservedOnes;
    vector<Precondition> unsuitableOnes;
    vector<string> Classroomvec;
   
    int cCourse ;
    void readCourseFile() {

        string courseCode;
        string courseName;
        int year;
        int credit;
        string courseInstructor;
        string temp;
        char compulsoryOrElective;
        char section;

        try
        {
            ifstream instream("courses.csv");
            do {

                getline(instream, courseCode, ';');
                getline(instream, courseName, ';');
                instream >> year;
                getline(instream, temp, ';');
                instream >> credit;
                getline(instream, temp, ';');
                instream >> compulsoryOrElective;
                getline(instream, temp, ';');
                instream >> section;
                getline(instream, temp, ';');
                getline(instream, courseInstructor, '\n');

                //zorunlu mu deðil mi
                if (!instream.eof()) {
                    if (compulsoryOrElective == 'C') {
                        CompulsaryCourse compulsaryCourse(courseCode, courseName, year, credit, true, section, courseInstructor, true);
                        allCourses.push_back(compulsaryCourse);
                        cCourse = cCourse + 1;
                    }
                    else if (compulsoryOrElective == 'E') {
                        ElectiveCourse electiveCourse(courseCode, courseName, year, credit, false, section, courseInstructor, false);
                        allCourses.push_back(electiveCourse);
                    }
                }

            } while (!instream.eof());

            instream.close();
        }
        catch (std::exception const& e) {
            cout << "File cannot opened! " << e.what() << endl;
        }
    }
        
    void readServiceFile() 
    {
        string courseCode, day, sectionTime;
        try
        {
            ifstream instream("service.csv");
            do {
                //günü belli dersleri satýr satýr okuyor
                getline(instream, courseCode, ';');
                getline(instream, day, ';');
                getline(instream, sectionTime, '\n');

                if (!instream.eof()) {
                    //precondition nesnesi olusturuyor
                    Precondition precondition;
                    //zorunlu ders sýnýfýnýn deðiþkenlerine atýyor
                    precondition.courseCode = courseCode;
                    precondition.courseDay.push_back(day);
                    precondition.courseSection.push_back(sectionTime);
                    //zorunlu dersler reservedOnes a aktarýlýyor
                    reservedOnes.push_back(precondition);
                }

            } while (instream.good());

            instream.close();
        }
        catch (std::exception const& e) {
            cout << "File cannot opened! " << e.what() << endl;
        }
    }

    void readBusyFile() 
    {
        string courseCode;
        string day;
        string sectionTime;
        try {
            ifstream instream("busy.csv");
            do {
                getline(instream, courseCode, ';');
                getline(instream, day, ';');
                getline(instream, sectionTime, '\n');

                if (!instream.eof()) {
                    Precondition precondition;
                    precondition.courseCode = courseCode;
                    precondition.courseDay.push_back(day);
                    precondition.courseSection.push_back(sectionTime);

                    //eðer ayný öðe yoksa unsuitableOnes a aktar
                    int counter = 0;
                    for (int i = 0; i < unsuitableOnes.size(); ++i) {
                        if (unsuitableOnes.at(i).getCourseCode().compare(precondition.courseCode) == 0) {
                            unsuitableOnes.at(i).courseDay.push_back(day);
                            unsuitableOnes.at(i).courseSection.push_back(sectionTime);
                            counter++;
                        }
                    }
                    if (counter == 0)
                        unsuitableOnes.push_back(precondition);
                }
            } while (instream.good());

            instream.close();
        }
        catch (std::exception const& e) {
            cout << "File cannot opened! " << e.what() << endl;
        }
    }
    int bigclass;

    void readClassroomFile() 
    {
        string sizeofClassroom, temp;
        int totalNumber;
        try {
            ifstream instream("classroom.csv");

            do {
                getline(instream, sizeofClassroom, ';');
                instream >> totalNumber;
                if (!instream.eof()) {
                    for (int i = 1; i <= totalNumber; i++) {

                        if (sizeofClassroom.compare("bigClass") == 0) {
                            //büyük sýnýflarý ayrý ayrý adlandýrýp allClassrooms a atýyor
                            BigClassroom classroom;
                            classroom.setCapacity(200);
                            classroom.setName("bigClass" + to_string(i));
                            allClassrooms.push_back(classroom);
                            bigclass = totalNumber;

                        }
                        else {

                            SmallClassroom classroom;
                            classroom.setCapacity(50);
                            classroom.setName("smallClass" + to_string(i));
                            allClassrooms.push_back(classroom);

                        }

                    }
                }

            } while (!instream.eof());

            instream.close();
        }
        catch (std::exception const& e) {
            cout << "File cannot opened! " << e.what() << endl;
        }
    }
    int i=1;
    void makeSchedule() {

        readCourseFile();
        readServiceFile();
        readBusyFile();
        readClassroomFile();

        int numberOfClassrooms = ((int)Classroom::totalClasses);
        if (!(controller.firstCheck(numberOfClassrooms, bigclass, allCourses.size(), cCourse))) {
            i = 0;
        }
        else {
            i = 1;
            controller.setReserveds(reservedOnes, allClassrooms, &allCourses);
            controller.setBusyCourses(unsuitableOnes, allClassrooms, &allCourses);
            controller.setOthers(allClassrooms, &allCourses);
            
        }

    }
};




