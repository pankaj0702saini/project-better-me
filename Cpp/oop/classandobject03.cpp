/*
Define a class Date to represent date (like d=31, m=12, y=2022). Declare
appropriate number of instance member variables and also define instance member
functions to set date and display date.
*/
#include<iostream>
using namespace std;
class Date
{
    private:
        int date,month,year;
    
    public:
        void setDate(int d, int m, int y)
        {
            date=d;
            month=m;
            year=y;
        }
        void getDate()
        {
            cout<<"d="<<date<<" m="<<month<<" y="<<year<<endl;
        }
};
int main()
{
    Date d1,d2;
    d1.setDate(23,02,2026);
    d1.getDate();
    d2.setDate(07,02,2004);
    d2.getDate();

}