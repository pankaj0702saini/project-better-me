/*
Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void SetValue(int x,int y)
        {
            a=x;
            b=y;
        }
        void ShowValue()
        {
            if(b>=0)
            {
                cout<<"Given complesx is "<<a<<"+"<<b<<"i"<<endl;
            }
            else
            {
                cout<<"Given complesx is "<<a<<b<<"i"<<endl;
            }
        }
};
int main()
{
    complex C1,C2;
    C1.SetValue(4,12);
    C1.ShowValue();
    C2.SetValue(7,-2);
    C2.ShowValue();
}

