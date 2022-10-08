#include<iostream>
using namespace std;
int main()
{
        int m,p,c,total;
        float per;
        cout<<"enter math marks";
        cin>>m;
         cout<<"enter phisics marks";
        cin>>p;
         cout<<"enter chemastry marks";
        cin>>c;
        total=m+p+c;
        per=total/3;
        if(per>75)
        {
            cout<<"grade A";

        }
        else if(per>=60 && per<=75)
        {
            cout<<"grade B";
        }
        else if(per>=45 && per<=60)
        {
            cout<<"grade C";

        }
        else if(per>=35 && per<=45)
        {
            cout<<"grade D";
        }
        else
        {
            cout<<"FAIL";
        }

}