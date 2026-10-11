#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int rollno;

    void display (){
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.name = "srinidhi";
    s1.age = 18;
    s1.rollno = 64;
    s1.display();
    return 0;
}