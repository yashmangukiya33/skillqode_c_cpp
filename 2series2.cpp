#include<iostream>
using namespace std;
int main()
{
    int i,number;
    cout<<"enter number :";
    cin>>number;
    for(i=1;i<=number;i++)
    {
        if (i%2==1)
        {
            cout<<"\t"<<i;

        }
        else
        {
            cout<<"\t"<<i*i;
        }
    }

}