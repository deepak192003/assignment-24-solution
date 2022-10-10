// Define a function to find the highest value digit in a given number.
#include<iostream>
int highest(int arr[],int n);
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter array size:";
    cin>>num;
    int  arr[num];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int maximum;
    maximum=highest(arr,num);
    cout<<"Maximum number from the given numbers is "<<maximum;
}
int highest(int arr[],int n)
{
    int i,max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}