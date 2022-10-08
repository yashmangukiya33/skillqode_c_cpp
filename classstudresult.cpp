#include<iostream>
using namespace std;
class student_result
{
    int math,sci,eng,total,i,rollno;
    float per;
    string student_name;
    public:
    void getdata();
    void putdata();
    void result();
};
void student_result :: getdata()
{   for(i=0;i<=2;i++)
    {
    cout<<" \t enter roll no: ";
    cin>>rollno;
    cout<<"\t enter student name: ";
    cin>>student_name;
    cout<<"\t enter math marks : ";
    cin>>math;
    cout<<"\t enter science marks : ";
    cin>>sci;
    cout<<"\t enter english marks : ";
    cin>>eng;
    }
    cout<<"\tmath\tsci\teng\ttotal\trollno\tper\tstudentname"<<math<<sci<<eng<<total<<rollno<<per<<student_name;
    
}
void student_result :: result()
{
    total=math+sci+eng;
    per=total/3;
    if(per>=80)
    {
        cout<<"\t grade a";
    }
    else if(per>=65)
    {
        cout<<" \t grade b";
    }
    else if(per>=50)
    {
        cout<<" \t grade c";
    }
    else if(per>=35)
    {
        cout<<" \t grade d";
    }
    else
    {
        cout<<" fail";
    }
}

}
void student_result :: putdata()
{
    
int main()
{
    student_result obj1;
    obj1.getdata();
    obj1.putdata();

}

