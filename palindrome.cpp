#include <iostream>
using namespace std;
int main()
{
    int n,d,rev=0,a;
    cout<<"Enter the number: ";
    cin>>n;
    a=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==a)
    {
        cout<<"No. is Palindrome"<<endl;
    }
    else{
        cout<<"No. is not a palindrome"<<endl;
    }
}
