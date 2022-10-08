#include<iostream>
using namespace std;
class mod
{
    float a,b;
    public:
    void setval(int x,int y)
    {
        a=x;
        b=y;
    }
    void getval()
    {
        cout<<"\a:"<<a<<"%b:"<<b;

    }
    void dosum()
    {
        cout<<"\na%b:"<<ab;
    }
};
int main()
{
    mod obj1,obj2;
    obj1.setval(1000,10);
    obj1.getval();
    obj1.dosum();
}
