#include<iostream>
using namespace std;
class array
{
    int a,b;
    public:
    void getdata();
    void putdata();
};
void array:: getdata()
{
    cout<<" enter two number ";
    cin>>a>>b;
}
void array:: putdata()
{
    cout<<"a="<<a<<"\tb="<<b<<endl;
    
}
int main()
{
    array obj1[5];
    int i;
    for(i=0;i<5;i++)
    obj1[i].getdata();
    for(i=0;i<5;i++)
    obj1[i].putdata();
    

}