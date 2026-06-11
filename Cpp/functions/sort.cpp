/* 
Define a C++ function to sort an array of integers in ascending or descending order
depending on bool type argument (true for ascending and false for descending).
Use default argument to implement it.
*/

#include<iostream>
using namespace std;
void sort(int arr[],int size, bool b=true);
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={23,45,63,76,12,88,95,54,65,29};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting :"<<endl;
    display(arr,size);
    sort(arr,size,true);
    cout<<"Array after sorting :"<<endl;
    display(arr,size);

    return 0;
}

void sort(int arr[],int size,bool b)
{
    int i,j,temp;
    if(b==true)
    {
        for(i=0;i<size;i++)
        {
            for(j=0;j<size-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    else
    {
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}