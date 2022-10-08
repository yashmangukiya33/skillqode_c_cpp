#include<iostream>
using namespace std;
class time
{
    int h,m;
    public:
    void getdata();
    void sum(time,time);
    void putdata();
    
};
void time :: getdata()
{
    cout<<"enter hour: ";
    cin>>h; 
    cout<<"enter minutes: ";
    cin>>m;
}
void time::sum(time t1,time t2)
{
    h=(t1.m+t2.m)/60;
    m=(t1.m+t2.m)%60;
    h=h+(t1.h+t2.h);
}
void time :: putdata()
{
    cout<<"\n hours= "<<h<<"\t minutes= "<<m;
}
int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();
}
