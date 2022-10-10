// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float ,float );
int main()
{
    int a,b,c;
    int l,breadth;
    float base,height;
    cout<<"Enter radius";
    cin>>a;
    cout<<"Area of circle is "<<area(a);
    cout<<endl;
    cout<<"Enter length and breadth of rectangle";
    cin>>l>>breadth;
    cout<<"Area of rectangle is "<<area(l,breadth);
    cout<<endl;
    cout<<"Enter base and height of triangle : ";
    cin>>base>>height;
    cout<<"Area of triangle is "<<area(base,height);
    cout<<endl;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;

}
float area(float base,float height)
{
    return 0.5*base*height;
}