#include <iostream>
using namespace std;
class student{
    public:
    
 string name;

    student(){
        string name = "srinidhi";
        
        cout << "consturctor is called" << endl;
    }
    ~student(){
        cout << "destructor is called" << endl;
    }
};
int main()
{
    student s1;
    s1.name = "srinidhi";
    cout << s1.name << endl;
    
    return 0;
}