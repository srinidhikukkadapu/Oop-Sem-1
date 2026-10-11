#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    student(string n, int a){
        name = n;
        age = a;
    }
};

int main()
{
    student s1("srinidhi", 18);
    cout << s1.name << endl;
    cout << s1.age << endl;
    return 0;
}