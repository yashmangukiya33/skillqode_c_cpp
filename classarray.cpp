#include<iostream>
using namespace std;
class array
{
    int a,b;
    public:
    void getdata();
    void putdata();

};
void array :: getdata()
{
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
}
void array :: putdata()
{
    cout<<" \n a="<<a<<"\t b: "<<b;
}
int main()
{
    int i;
    array obj1[5];
    for(i=0;i<5;i++)
   {
    obj1[5].getdata();
   }
   for(i=0;i<5;i++)
   {
    obj1[5].putdata();
    
   }

}