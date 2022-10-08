#include<iostream>
using namespace  std;
class reverse
{
    int n;
    public:
    void getdata();
    void putdata();
}; // namespace  std;
void reverse :: getdata()
{
    cout<<" enter number : ";
    cin>>n;
}
void reverse ::putdata()
{
    int rev=0;
    while(n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<" reverse number is:"<<rev;
}
int main()
{
    reverse obj1;
    obj1.getdata();
    obj1.putdata();
}
