#include <iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout << "eating" << endl;
    }
};
class dog : public animal
{
    public:
    void bark()
    {
        cout << "barking" << endl;
    }
};
class cat : public animal
{
    public:
    void meow()
    {
        cout << "meowing" << endl;
    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.bark();
    cat c1;
    c1.eat();
    c1.meow();  
    return 0;
}