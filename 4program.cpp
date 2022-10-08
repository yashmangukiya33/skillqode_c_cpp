#include<iostream>
using namespace std;
class flight
{
    int fnumber;
    string destination;
    float distance,fuel;
    public:
    void feedinfo();
    void calfuel();
    void showinfo();
};
void flight :: feedinfo()
{
    cout<<"\n enter flight number : ";
    cin>>fnumber;
    cout<<"\n enter your destination : ";
    cin>>destination;
    cout<<"\n enter distance : ";
    cin>>distance;
    
}
void flight :: calfuel()
{
    if(distance<=1000)
    {
       fuel=500;
    }
    else if(distance>1000&&distance<=2000)
    {
        fuel=1100;
    }
    else
    {
        fuel=2200;
    }
    
} 
void flight :: showinfo()
{
        cout<<"\n enter flight number : "<<fnumber;
        cout<<"\n enter your destination : "<<destination;
        cout<<"\n enter distance : "<<distance;
        cout<<"\n fule : "<<fuel;


} 
int main()
{
    flight obj1;
    obj1.feedinfo();
    obj1.calfuel();
    obj1.showinfo();
}