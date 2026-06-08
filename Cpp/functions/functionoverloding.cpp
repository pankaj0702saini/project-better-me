#include<iostream>
using namespace std;
//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
int area(int,int);
float area(int);
float area(float,float);

//vrite functions using function overioading to add two humbers having difrerent data types.

int add(int,int);
float add(float,float);

int main()
{
    int l,b,r;
    cout<<"Enter length and bredth of rectangle";
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    cout<<"Enter radius of circle ";
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<endl;
    float h,base;
    cout<<"Enter base and height of triangle";
    cin>>base>>h;
    cout<<"Area of triangle is "<<area(base,h)<<endl;

    int x,y;
    float p,q;
    cout<<"Enter two integer number you want to add :";
    cin>>x>>y;
    cout<<"Sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;

    cout<<"Enter two real number you want to add :";
    cin>>p>>q;
    cout<<"Sum of "<<p<<" and "<<q<<" is "<<add(p,q)<<endl;

    return 0;

}

int area(int l,int b)
{
    return l*b;
}
float area(int r)
{
    return 3.14*r*r;
}
float area(float base,float h)
{
    return (base*h)/2;
}
int add(int x,int y)
{
    return x+y;
}
float add(float p,float q)
{
    return p+q;
}