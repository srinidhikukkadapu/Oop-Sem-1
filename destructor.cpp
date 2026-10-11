#include <iostream>
using namespace std;
class student
{ public:
string name; 
int age;
~student(){
    
    cout << "destructor is called" << endl;
}

};

int main()
{
    student s1;
    return 0;
}