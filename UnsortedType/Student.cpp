#include "Student.h"
//#include< iostream>
#include<bits/stdc++.h>

using namespace std;


Student::Student()
{
    ID=0;
    name="";
    CGPA=0.0;
}

Student::Student(int id, string name, float cgpa)
{
    this->ID=id;
    this->name=name;
    this->CGPA=cgpa;
}

void Student::setID(int id)
{
    this->ID=id;
}
void Student::setName(string name)
{
    this->name=name;
}
void Student::setCGPA(float CGPA)
{
    this->CGPA=CGPA;
}

int Student::getID()
{
    return ID;
}
string Student::getName()
{
    return name;
}
float Student::getCGPA()
{
    return CGPA;
}

void Student::print(){
cout<<"ID= "<<ID<<" Name: "<<name<<" CGPA: "<<CGPA;
}

bool Student::operator == (Student &inputobj){
    if(this->getID()==inputobj.getID()) return true;
    else return false;
}

bool Student::operator != (Student &inputobj){
    if(this->getID()!=inputobj.getID()) return false;
    else return false ;
}

