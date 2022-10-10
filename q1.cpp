// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime(int n);
int main()
{
    int num;
    cout<<"Enter a number to check whether it is prime or not: ";
    cin>>num;
    if(prime(num)==0)
    {
        cout<<"Given number is prime ";
    }
    else 
    {
        cout<<"NOt prime";
    }
    return 0;
}
int prime(int n)
{
    int flag=0;
    for(int i=2;  i<=n/2  ;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    return flag;
}