/*
Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/
#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    
    public:
        void setTime(int x,int y, int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showTime()
        {
            cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
        }
};
int main()
{
    Time t1,t2;
    t1.setTime(3,35,15);
    t1.showTime();
    t2.setTime(5,50,00);
    t2.showTime();
}