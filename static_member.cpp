//static data member
#include <iostream>
using namespace std;
class student // class declaration
{
    public:
    string name;
    int age;
    int rollno;
    static string college_name;

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "age is : " << age << endl;
        cout << "rollno is : " << rollno << endl;
        cout << "college name is : " << college_name << endl;
    }
};

string student::college_name= "soai"; // static data member
int main()
{
    student s1; // object creation
    s1.name = "srindhi";
    s1.age = 18;
    s1.rollno = 123;
    s1.display();
    student s2;
    s2.name = "mitali";
    s2.age = 19;
    s2.rollno = 124;
    s2.display();
    return 0;
}