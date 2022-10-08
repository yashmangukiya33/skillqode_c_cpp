#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    demo();
    void putdata();

};
demo::demo()
{
    a=10;
}
void demo::putdata()
{
    cout<<" a="<<a;
}
int main()
{
    demo obj1;
    obj1.putdata();
}
