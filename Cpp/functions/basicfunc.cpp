#include<iostream>
using namespace std;

// A C++ function to print all prime number b/w 2 given numbers
void primeno()
{
    int x,y;
    cout<<"Enter range(two number) :";
    cin>>x>>y;
    cout<<"Prime number b/w "<<x<<" and "<<y<<" are:";
    for(int i=x;i<=y;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            cout<<i<<", ";

    }
}

//Define a C++ function to find highest number digit in given number
void highest_number()
{
    int a,n;
    cout<<"Enter a number whose highest digit you want to find :";
    cin>>a;
    n=a;
    int current,prev=0;
    while(n>0)
    {
        current=n%10;
        n=n/10;
        if(current>=prev)
            prev=current;
    }
    cout<<"Highest number digit in "<<a<<" is "<<prev;
}


int main()
{
    
    // highest_number();
    // primeno();
    return 0;

}