#include<iostream>
using namespace std;
class employee
{
    int salary,days,sum;
    int hours;
    string employee;
    public:
    void details();
    void bounce();
    void display();
};
void employee :: details()
{
    cout<<"\n enter employee name : ";
    cin>>employee;
    cout<<" \n enter employee salary: ";
    cin>>salary;
    cout<<"enter employee working hours: ";
    cin>>hours;
    cout<<" employee working days";
    cin>>days;
    
        
    
}
void employee :: bounce()
{
    sum=salary*hours*days;
    cout<<"income:"<<sum;
    
}
void employee :: display()
{
    if(hours>8)
    {
        cout<<salary*2;
    }
}
int main()
{
    employee obj1;
    obj1.details();
    obj1.bounce();
    obj1.display();
}

