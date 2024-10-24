#ifndef STUDENT_H
#define STUDENT_H


#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int ID;
    string name;
    float CGPA;

public:
    Student();
    Student(int ID, string name,float CGPA);

    void setID(int ID);
    void setName(string name);
    void setCGPA(float CGPA);

    int getID();
    string getName();
    float getCGPA();

    void print();


   // friend bool operator ==(Student &, Student &);
   // friend bool operator != (Student &, Student &);

   bool operator ==(Student &obj);
    bool operator != (Student &obj);
     

};
#endif // STUDENT_H
