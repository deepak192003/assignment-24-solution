// Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int=0,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     
    cout<<"Sum is "<<add(a,b);
    cout<<endl;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum is "<<add(a,b,c);

}
int add(int x,int y, int z)
{
    return x+y+z;
}