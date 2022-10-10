// Define a function to swap data of two int variables using call by reference
#include<iostream>
void swap(int &x,int &y);
using namespace std;
int main()
{
    int a=2,b=3;
   
    cout<<"Before swapping value of a and b is "<<" "<<a<<" "<<b;
    cout<<endl;
 swap(a,b);
 cout<<"After swapping value of a and b is "<<" "<<a<<" "<<b;
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}