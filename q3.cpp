// Define a function to calculate x raised to the power y
#include<iostream>
int power(int n,int x);
using namespace std;
int main()
{
    int num,pow,result;
    cout<<"Enter base: ";
    cin>>num;
    cout<<"Enter power";
    cin>>pow;
    result=power(num,pow);
    cout<<"Power of "<<num<<" "<<"is"<<" "<<result;
    return 0;
}
int power(int n,int x)
{
    int i,result=1;
    for(i=1;i<=x;i++)
    {
        result=result*n;
    }
    return result;
}