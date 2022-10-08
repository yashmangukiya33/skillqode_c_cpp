#include<iostream>
using namespace std;
class bank
{
    float bal;
    int total_withdraw;
    public:
    bank(float balance)
    
    {
        bal=balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank :: deposit()
{
    int deposit;
    cout<<" \n enter deposit ammount=";
    cin>>deposit;
    bal+=deposit;
}
void bank :: withdraw()
{
    int withdraw;
    cout<<" enter withdraw ammount=";
    cin>>withdraw;
    bal-=withdraw;
    total_withdraw=
}
void bank :: display()
{
    cout<<" balance="<<bal;
}
int main()
{
    float balance;
    cout<<"\n balance=";
    cin>>balance;
    bank obj1(balance);
    obj1.deposit();
    obj1.withdraw();
    obj1.display();

}