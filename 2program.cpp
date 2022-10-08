#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs;
    string bname;
    float avg;
    public:
    void readdata();
    void calcavg();
    void displaydata();

};
void batsman :: readdata()
{
    cout<<"\n batsman number :";
    cin>>bcode;
    cout<<"\n baatsman name : ";
    cin>>bname;
    cout<<" \n enter batsaman innigs : "; 
    cin>>innings;
    cout<<" \n enter batsman runs : ";
    cin>>runs;
    cout<<" \n enter batsman notout innig : ";
    cin>>notout;
}
void batsman :: calcavg()
{
    avg=runs/(innings-notout);
}
void batsman :: displaydata()
{
    cout<<"\n batsman number"<<bcode;
    cout<<" \n batsman name : "<<bname;
    cout<<" \n batsman innig :"<<innings;
    cout<<"\n batsman runs :"<<runs;
    cout<<"\n batsman notout innigs:"<<notout;
    cout<<"\n batsman avg are :"<<avg;
}
int main()
{
    batsman obj1;
    obj1.readdata();
    obj1.calcavg();
    obj1.displaydata();

}
