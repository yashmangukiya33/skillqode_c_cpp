#include<iostream>
using namespace std;
int main()
{
    int quantitiy,choice;
    int qrooms=0,qpastas=0,qburgers=0,qnoodels=0,qshake=0;
    int srooms=0,spastas=0,sburgers=0,snoodels=0,sshake=0;
    int total_rooms=0,total_pastas=0,total_burgers=0,total_noodels=0,total_shake=0;

    cout<<"\n \t quantity item we have  ";
    cout<<" \n room are avalible: ";
    cin>>qrooms;
    cout<<" \n quantity of pastas: ";
    cin>>qpastas;
    cout<<" \n quantity of berger: ";
    cin>>qburgers; 
    cout<<" \n quantity of noodels: ";
    cin>>qnoodels;
    cout<<" \n quantity of shakes: ";
    cin>>qshake;
    
    m:
    cout<<"\n\n\t select from our menu option";
    cout<<" \n\n1)rooms";
    cout<<"\n2)pasta";
    cout<<"\n3)bergur";
    cout<<"\n4)noodles";
    cout<<"\n5)shake";
    cout<<"\n7)infomation of collction";
    cout<<"\n8)exit";


    cout<<" \n \t enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<" \n\n enter the number of rooms you want: ";
        cin>>quantitiy;
        if(qrooms-srooms>=quantitiy)
        {
            srooms=srooms+quantitiy;
            total_rooms=total_rooms+quantitiy*1200;
            cout<<"\n\n\t"<<quantitiy<<" room have to alloted you ";

        }
        else
        {
            cout<<" \n only "<<qrooms-srooms<<" is remain in hotal : ";
            break;
        }

        case 2:
        cout<<" \n\n enter pasatas quantity : ";
        cin>>quantitiy;
        if(qpastas-spastas>=quantitiy)
        {
            spastas=spastas+quantitiy;
            total_pastas=total_pastas+quantitiy*250;
            cout<<" \n\n\t"<<quantitiy<<" pasta is order ";

        }
        else
        {
            cout<<"\n only"<<qpastas-spastas<<" pastas is remain in hotal: ";
            break;
        }

        case 3:
        cout<<"\n \n enter bergurs quantity ";
        cin>>quantitiy;
        if(qburgers-sburgers>=quantitiy)
        {
            qburgers=qburgers+quantitiy;
            total_burgers=total_burgers*50;
            cout<<" \n\n\t "<<quantitiy<<" burger is order";
        }
        else
        {
            cout<<"\n only "<<qburgers-sburgers<<" burger is remain in hotal ";
            break;
        }

        case 4:
        
            cout<<" \n enter quantitiy of noodles : ";
            cin>>quantitiy;
            if(qnoodels-snoodels>=quantitiy)
            {
                qnoodels=qnoodels+quantitiy;
                total_noodels=total_noodels+quantitiy*140;
                cout<<" \n\n\t"<<quantitiy<<" noodles is order";

            }
            else 
            {
                cout<<" \n only "<<quantitiy<<" is remain in hotel";
                break;
            }
         case 5:
            cout<<"\n  enter qantity if shakes: ";
            cin>>quantitiy;
            if(qshake-sshake>=quantitiy)
            {
                qshake=qshake+quantitiy;
                total_shake=total_shake+quantitiy*100;
                cout<<" \n\n\t"<<quantitiy<<" shakes is order";

    
            }
            else
            {
                cout<<"\n olny "<<quantitiy<<" is remain in hotel";
                break;
            }   
         case 6:

            cout<<"\n\n \t details of sale and collection ";
            cout<<" \n number of room we have: "<<quantitiy;
            cout<<" \n number of room we give for rent "<<srooms;
            cout<<" \n remain rooms "<<qrooms-srooms;
            cout<<" \n total room collction for the day "<<total_rooms;

            cout<<" \n\n number of pastas we had "<<quantitiy;
            cout<<" \n number of pastas we sold "<<spastas;
            cout<<" \n remain pasta are "<< qpastas-spastas;
            cout<<" \n total pastas collection area"<<total_pastas;

            cout<<"\n  number of burber we had "<<quantitiy;
            cout<<" \n number of burgar we sold "<<sburgers;
            cout<<" \n remain of burger is "<<qburgers-sburgers;
            cout<<"\n total burger collection is"<<total_burgers;

            cout<<" \n\n number of noodels we had "<<quantitiy;
            cout<<" \n number of noodels we sold "<<snoodels;
            cout<<" \n number of noodles is reamain "<<qnoodels-snoodels;
            cout<<" \n tota collection of noodles are  "<<total_noodels;

            cout<<"\n\n number os shake we had "<<quantitiy;
            cout<<" \n number of shake we sold "<<sshake;
            cout<<" \n remain of shake are "<<qshake-sshake;
            cout<<" \n total shake collection are "<<total_shake;

        case 7:

            exit(0);
            cout<<" \n select number of above ";
            

        
          

        
        
    
    }
    goto m;

}






















