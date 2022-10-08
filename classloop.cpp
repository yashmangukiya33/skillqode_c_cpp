#include<iostream>
using namespace std;
class onetoten
{
    int n;
    public:
    void getdata();
    void putdata();
};
void onetoten :: getdata()
{
    cout<<"enter number : ";
    cin>>n;

}
void onetoten :: putdata()
{   
    int i;
    for(i=n;i<=10;i++)
    {
        cout<<" \n"<<i;
    }

}
int main()
{
    onetoten obj1;
    obj1.getdata();
    obj1.putdata();
}