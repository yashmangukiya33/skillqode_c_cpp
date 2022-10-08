#include<iostream>
using namespace std;
class demo
{
    int x,y;
    static int z;

    public:
    void getdata();
    void putdata();

};
int demo:: z;
void demo:: getdata()
{
    cout<<"enter two number:";
    
    cin>>x>>y;
    z++;    
}
void demo :: putdata()
{
    cout<<"x="<<x<<"y="<<y;
    cout<<"static z="<<z;
}
int main()
{
    demo obj1,obj2;
    obj1.getdata();
    obj2.getdata();
    obj1.putdata();
    obj2.putdata();

}

