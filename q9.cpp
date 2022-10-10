// Write functions using function overloading to add two numbers having different data
// types
#include<iostream>
using namespace std;
int sum(int , int );
double sum(double , double );
int main()
{
    int a=23,b=32;
    double c=23.23, d=22.21;
    cout<<"Sum of a and b is "<<sum(a,b);
    cout<<endl;
    cout<<"Sum of c and d is "<<sum(c,d);
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}
double sum(double x, double y)
{
    return x+y;
}