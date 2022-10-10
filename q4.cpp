// Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include<iostream>
void printfibonacci(int,int);
using namespace std;
int main()
{
    int num;
    int n;
    cout<<"Enter in how many terms you check";
    cin>>n;
    cout<<"Enter a number to check whether it is in terms of fibonacci series or not";
    cin>>num;
    printfibonacci(n,num);
}

void printfibonacci(int n,int x)
{
    int i,n1=0,n2=1;
    int next_term;
    for(i=0;i<n;i++)
    {
        
        if(x==n1||x==n2)
        {
            cout<<"Yes the given term is in the fibonacci series";
            break;
        }
        next_term=n1+n2;
        if(x==next_term)
        {
            cout<<"Yes the given number is present in the fibonacciseries";
            break;
        }
        n1=n2;
        n2=next_term;
    }
}