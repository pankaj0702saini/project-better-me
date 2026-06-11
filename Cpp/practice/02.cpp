#include<iostream>
using namespace std;
int main()
{
    int arr[8]={23,43,54,12,76,94,65,90};
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<8;i++)
        cout<<arr[i]<<", ";

    return 0;
}