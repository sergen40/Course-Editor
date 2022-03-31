#ifndef UNTITLED1_BIGCLASSROOM_H
#define UNTITLED1_BIGCLASSROOM_H

#include "Classroom.h"

class BigClassroom : public Classroom
{
public:
    static int totalBigClassrooms;

    BigClassroom() {
        totalBigClassrooms++;
    }
};

int BigClassroom::totalBigClassrooms = 0;

#endif