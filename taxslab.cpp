#include<iostream>
using namespace std;
int main()
{
        float s,tax;
        cout<<"\nenter salary ";
        cin>>s;
        if(s<=2500)
        {
            cout<<"no tax";

        }
        else if(s>=2500 && s<=5000)
        {
            tax=s*0.10;
            cout<<"tax"<<tax;
        }
        else if(s>=5000 && s<=1000)
        {
            tax=s*0.20;
            cout<<"tax"<<tax;
        }
        else
        {
            tax=s*0.30;
            cout<<"tax"<<tax;
        

        }
        
}