#ifndef UNTITLED1_SMALLCLASSROOM_H
#define UNTITLED1_SMALLCLASSROOM_H


#include "Classroom.h"

class SmallClassroom : public Classroom
{
public:
    static int totalSmallClassroom;

    SmallClassroom() {
        totalSmallClassroom++;
    }
};

int SmallClassroom::totalSmallClassroom = 0;

#endif 