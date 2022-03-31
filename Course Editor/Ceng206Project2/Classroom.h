#ifndef UNTITLED1_CLASSROOM_H
#define UNTITLED1_CLASSROOM_H

#include <string>
#include <ostream>

using namespace std;

class Classroom
{
private:
    int capacity;
    string name;

public:

    const string& getName() const;
    void setName(const string& name);
    int getCapacity() const;
    void setCapacity(int capacity);

    static int totalClasses;

    Classroom();
    ~Classroom();

    Classroom(int capacity) {
        this->capacity = capacity;
        totalClasses++;
    }

    friend ostream& operator<<(ostream& os, const Classroom& classroom);

};

int Classroom::totalClasses = 0;

Classroom::Classroom()
{
    totalClasses++;
}


Classroom::~Classroom()
{
}


int Classroom::getCapacity() const {
    return capacity;
}

void Classroom::setCapacity(int capacity) {
    Classroom::capacity = capacity;
}

ostream& operator<<(ostream& os, const Classroom& classroom) {
    os << classroom.name;
    return os;
}

const string& Classroom::getName() const {
    return name;
}

void Classroom::setName(const string& name) {
    Classroom::name = name;
}

#endif 