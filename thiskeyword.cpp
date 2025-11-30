#include<iostream>

using namespace std;

class Student
{
    public:
    int id;
    string name;
    double gpa;
    Student(int id, string name, double gpa)
    {
        this->id=id;
        this->name=name;
        this->gpa=gpa;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<gpa<<endl;
    }
};

int main()
{
    Student s1(101, "John", 3.6);
    Student s2(102, "Jane", 3.8);
    s1.display();
    s2.display();
    return 0;

}