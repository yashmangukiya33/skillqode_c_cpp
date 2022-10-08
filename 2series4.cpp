#include<iostream>
using namespace std;
int main()
{
    int i,number,j=1;
    cout<<"enter number : ";
    cin>>number;
    for(i=1;i<=number;i=i*2,j++)
    {
        cout<<" "<<i*j;
    }
}
