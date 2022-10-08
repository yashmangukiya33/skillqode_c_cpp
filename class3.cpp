#include<iostream>
using namespace std;
class minus
{
    int a,b;
    public:
    void setval(int x,int y)
    {
        a=x;
        b=y;
    }
    void getval()
    {
        cout<<"\n a:"<<a<<"b:"<<b;
    }
    void dosum()
    {
        cout<<"\na-b:"<<a-b;
    }
};
int main()
{
    minus obj1,obj2;
     
}