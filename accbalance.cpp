#include<iostream>
using namespace std;
class bank
{
    float accbalance;
    public:
    bank()
    {
        accbalance=1000;
        cout<<"\n default constuctor called..";
    }
    bank( int initbal)
    {
        accbalance=initbal;
        cout<<"\n parameter constuctor caaled..";
    }
    void showaccountbalance()
    {
        cout<<"\n account balance :"<<accbalance;
    }
    void addaccbalance()
    {
        int addaccbalance;
        cout<<"\n deposit balance: ";
        cin>>addaccbalance;
        addaccbalance+=accbalance;
        cout<<"\n final amout : "<<accbalance;        
        
    
    
};
int main()
{
    bank person1(1500),person2(5000),person3(4000);
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
    person1.addaccbalance();
    person2.addaccbalance();
    person3.addaccbalance();
    

}