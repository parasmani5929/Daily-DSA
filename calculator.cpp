#include <iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter your choice:";
    cin>>n;

    switch(n)
    {
        case 1:n=1;
        c=a+b;
        case 2:n=2;
        c=a-b;
        case 3:n=3;
        c=a*b;
        case 4:n=4;
        c=a/b;
    }
    cout<<c;
}