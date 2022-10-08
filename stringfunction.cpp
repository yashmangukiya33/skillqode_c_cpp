#include<iostream>
using namespace std;
#include<string>
void mystring(string newstr)
{
    cout<<" hello,"<<newstr<<" welcome to sqill code\n";

}
int main()
{
    string str;
    cout<<" please enter your name \n";
    getline(cin,str);
    mystring(str);
}