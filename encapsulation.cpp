#include<iostream>
using namespace std;

class Employees {
    public:
    string name;
    int id;
    
    private:
    int salary;
    public:
    void setSaalry(int s,string name)
    {
        salary = s;
        cout<<"Salary of "<<name<<" is "<<salary<<endl;}
    int getSalary()
    {
     return salary;

    }

};

int main(){
    Employees emp;
    emp.id = 1;
    emp.name = "John";
    cout << "Employee ID: " << emp.id << endl;
    cout << "Employee ID: " << emp.name << endl;
    emp.setSaalry(5000, emp.name);
    return 0;
}