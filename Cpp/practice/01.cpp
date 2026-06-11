#include<iostream>
using namespace std;

//Define a c++ function to swap data of two int variable using call by reference
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}


int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    cout<<"Value of a and b before swap is "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"Value of a and b after swap is "<<a<<" and "<<b;

    return 0;
}