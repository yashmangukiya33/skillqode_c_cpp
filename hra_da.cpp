#include<iostream>
using namespace std;
int main()
{
    int hra,da,a,total;
    cout<<"enter a:";
    cin >>a;

    if(a<5000)
    {
        hra=a*0.08;
        cout<<"\n total hra is"<<hra;
        da=a*0.2;
        cout<<"\ntotal da is"<<da;
        total=a-hra-da;
        cout<<"\ntotal is "<<total;

    }
    else if(a<10000)
    {
        hra=a*0.12;
        cout<<" \ntotal hra is"<<hra;
        da=a*0.3;
        cout<<"\ntotal da is"<<da;
        total=a-hra-da;
        cout<<"\ntotal is "<<total;

    }
    else if(a<15000)
    {
        hra=a*0.15;
        cout<<"\n total hra is"<<hra;
        da=a*0.4;
        cout<<"\ntotal da is"<<da;
        total=a-hra-da;
        cout<<"\ntotal is "<<total;

    }
    if(a<=15000)
    {
        hra=a*0.2;
        cout<<"\n total hra is"<<hra;
        da=a*0.5;
        cout<<"\ntotal da is"<<da;
        total=a-hra-da;
        cout<<"\ntotal is "<<total;

    }

}