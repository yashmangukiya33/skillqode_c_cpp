#include<iostream>
using namespace std;
int main()
{
    int i,number,a=1,b=1,c=1;
    cout<<" enter number :";
    cin>>number;
    cout<<"\t "<<b<<"\t "<<c;
    for(i=1;i<=number-1;i=i+2)
    {
            a=b+c;
            b=c;
            c=a;
            cout<<"\t "<<a;

    }
}

