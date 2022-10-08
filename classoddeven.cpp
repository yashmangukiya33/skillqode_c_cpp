#include<iostream>
using namespace std;
class oddeven
{
    int a;
    public:
    void getdata();
    void putdata();

};
void oddeven ::getdata()
{
    cout<<"enter number: \n";
    cin>>a;
}
void oddeven ::putdata()
{
    if(a%2==0)
    {
        cout<<"\n even number";
    }
    else 
    {
        cout<<"\n odd number";
    }

}
int main()
{
    oddeven obj1;
    obj1.getdata();
    obj1.putdata();
    
}