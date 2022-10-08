#include<iostream>
using namespace std;
class b;
class a
{
    int a;
    public:
    void inputdata()
    {
        cout<<" enter number :";
        cin>>a;
    }
    friend void max(a,b);
};
class b
{
    int b;
    public:
    void getdata()
    {
        cout<<" enter number :";
        cin>>b;
    }
    friend void max(a,b);

};
void max (a obj1,b obj2)
{
    if(obj1.a>obj2.b)
    {
        cout<<" \n max "<<obj1.a;
    }
    else 
    {
        cout<<"\n max :"<<obj2.b;
    }
}
int main()
{
    a obj1;
    b obj2;
    obj1.inputdata();
    obj2.getdata();
    max(obj1,obj2);
}