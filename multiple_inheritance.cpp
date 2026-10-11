#include <iostream>
using namespace std;
class engine
{
    public: 
    void start()
    {
        cout << "engine is starting"<< endl;
    }
};
class musicsystem
{
    public:
    void playmusic()
    {
        cout << "music is playing"<< endl;

    }
};
class car: public engine, public musicsystem
{
    public:
    void stop()
    {
        cout << "car is stopping"<< endl;
    }
};
int main()
{
    car c1;
    c1.start();
    c1.playmusic();
    c1.stop();
    return 0;
}