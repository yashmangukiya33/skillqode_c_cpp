#include<iostream>
using namespace std;
class para
{
    int a,b;
    public:
    
    para (int m,int n);
    void putdata();
};
para :: para(int m,int n)
{
    a=m;
    b=n;
}
void para :: putdata()
{
    cout<<"a="<<a<<"b="<<b;

}
int main()
{
    int x,y;
    cout<<" enter x and y:";
    cin>>x>>y;
    para obj1(x,y);
    obj1.putdata();
}

    