#include<iostream>
using namespace std;
class divid
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
        cout<<"\n a:"<<a<<"/b:"<<b;
    }
    void dosum()
    {
        cout<<"\na/b:"<<a/b;
    }
       
};
int main()
{
    divid obj1,obj2;
    obj1.setval(10,20);
    obj1.getval();
    obj1.dosum();
    obj1.dosum();

    
    
}
