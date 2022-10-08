#include<iostream>
using namespace std;
class bank
{
    static int stcount;
    float bal;
    public:
    bank(float balance)
    
    {
        bal=balance;
    }
    void deposit();
    void withdraw();
    void display();
    void info();
};
int bank :: stcount;
void bank :: deposit()
{
    int deposit,total_d;
    cout<<" \n enter deposit ammount=";
    cin>>deposit;
    bal+=deposit;
    total_d=deposit
}
void bank :: withdraw()
{
    int withdraw;
    cout<<" enter withdraw ammount=";
    cin>>withdraw;
    bal-=withdraw;
}
void bank :: display()
{
    cout<<" balance="<<bal;
}
void bank :: info()
{


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