// Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int a,int b);
// float max(float x,float y);
int main()
{
  float a,b;
  int c,d;

    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"maximum between two number is "<<max(a,b);
}
// float max(float x,float y)
// {
//     if(x>y)
//     {
//         return x;
//     }
//     else
//          return y;
    
// }
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
         return b;
}