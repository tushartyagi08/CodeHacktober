#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter a number A: ";
    cin>>a;
    cout<<"Enter a number B: ";
    cin>>b;
    cout<<"Enter a number C: ";
    cin>>c;
    if(a>=b && a>=c)
    cout<<"a is the greatest number";
    if(b>=a && b>=c)
    cout<<"b is the greatest number";
    if(c>=a && c>=b)
    cout<<"c is the greatest number";
    
    return 0;
}
