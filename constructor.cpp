#include <iostream>
using namespace std;
class student {
    public:
    int age;
    string name;
    student(){
        age = 18;
        name = "srinidhi";
        cout << "consturctor is called" << endl;
    }
    void display () {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{ student s1;
s1.display();
return 0;
}