#include <iostream>
using namespace std;
class student
{
    public:
    int age ;
    string name;
    student(int age, string name)
    { 
        this-> age = age;
        this-> name = name;

    }
    void display()
    {
        cout << "age is : " << age << endl;
        cout << "name is : " << name << endl;
    }
};

int main()
{ 
    student s1(18, "srinidhi");
    s1.display();
    return 0;
}