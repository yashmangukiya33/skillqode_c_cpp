#include<iostream>
using namespace std;
class positive
{
    int a;
    public:
    void getdata();
    void putdata();
};
void positive :: getdata()
{
    cout<<" enter number: \n";
    cin>>a;

}
void positive :: putdata()
{
    if(a>0)
    {
        cout<<" positive";
    }
   else if(a<0)
    {
        cout<<" negetive";
    }
    else
    {
        cout<<" zero";
    }
}
int main()
{
    positive obj1;
    obj1.getdata();
    obj1.putdata();
}

