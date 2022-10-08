#include<iostream>
using namespace std;
class student
{
    int admno;
    string name;
    float math,eng,science,total;
    public:
    void takedata();
    void ctotal();
    void showdata();
    
};
void student::takedata()
{   
    cout<<" enter student admin number :";
    cin>>admno;
    cout<<"\n enter student name : ";
    cin>>name;
    cout<<"\n enter math marks: ";
    cin>> math;
    cout<<" \n enter english marks: ";
    cin>>eng;
    cout<<"\n enter sience marks: ";
    cin>>science;
}
void student :: ctotal()
{
    total=math+eng+science;
    

}
void student :: showdata()
{
        cout<<"\n enter student admin number :"<<name;
        cout<<"\n total: "<<total;

}

int main()
{
    student obj1;
    obj1.takedata();
    obj1.ctotal();
    obj1.showdata();
}
