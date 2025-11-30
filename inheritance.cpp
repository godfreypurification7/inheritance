#include <iostream>
#include <string>
using namespace std;

class Institute {
public:
    string name;
    string address;
    string contact;
};

class Student {
public:
    string name;
    int roll_no;
    float gpa;
};

class StudentFamily : public Student {
public:
    string father_name;
    string mother_name;
    string address;
};

class StudentDetails : public StudentFamily {
public:
    string department;
    void display(string additionalInfo) {
        cout<<"\nStudent Details: "<<endl;
        cout << "\nName: " << Student::name << endl
             << "Roll No: " << roll_no << endl
             << "GPA: " << gpa << endl
             << "Father's Name: " << father_name << endl
             << "Mother's Name: " << mother_name << endl
             << "Address: " << StudentFamily::address << endl
             << "Department: " << department << endl
             << "Additional Info: " << additionalInfo << endl;
    }
};

class DepartmentDetails : public StudentDetails, public Institute {
public:
    string department_name;
    string department_head;
    void displayInstitute(string additionalInfo) {
        display(additionalInfo);
        cout << "\nInstitute Name: " << Institute::name << endl
             << "Institute Address: " << Institute::address << endl
             << "Institute Contact: " << contact << endl;
    }
};

int main() {
    DepartmentDetails student1;
    student1.Student::name = "John Doe";
    student1.roll_no = 123456;
    student1.gpa = 3.5;
    student1.father_name = "Mr. Doe";
    student1.mother_name = "Mrs. Doe";
    student1.StudentFamily::address = "123, Doe Street, Doe City";
    student1.department = "Computer Science";
    student1.Institute::name = "XYZ Institute";
    student1.Institute::address = "123, XYZ Street, XYZ City";
    student1.contact = "1234567890";
    student1.displayInstitute("Additional Info: Student of the Year 2021");

    return 0;
}