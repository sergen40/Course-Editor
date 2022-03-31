#include "MyForm.h"
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

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Ceng206Project2::MyForm form;
	Application::Run(% form);
}


