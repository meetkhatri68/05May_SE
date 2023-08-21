//Create a  project of event manegment system?
#include<iostream>
using namespace std;
string name1, name2;
int Nog,nom,cph,cpm,cod,cost1,cost2,cos;//cost per hour(cph),cost per minute(cpm),cost of dinner(cod),cost of one server(cos)
int tfc,ac,tc,nos;//total food cost(tfc),number of guest(nog),average cost(ac),total cost(tc),number of servers(nos)
class EventManegment
{
public: 
    int Eventname()
    {
        cout<<"\nEnter The Name Of Event: ";
        cin>>name1;
    }
    int EventOwner()
    {
        cout<<"\nEnter Coustmer Name: ";
        cin>>name2;
        cout<<"\nEnter The Number Of Guest: ";
        cin>>Nog;
        cout<<"\nEnter The Number Of Minutes In The Event: ";
        cin>>nom;
    }
    int costestimate()
    {
        cout<<"\nEvent Cost Estimation.";
        cout<<"\nCost Per Hour: ";
        cin>>cph;
        cout<<"\nCost Per Minutes: ";
        cin>>cpm;
        cout<<"\nCost Of Dinner: ";
        cin>>cod;
    }
    int numberofservers()
    {
        //GET COST of ONE Server
        cost1=(nom / 60) * cph;
        cost2=(nom % 60) * cpm;
        cos=cost1 + cost2;
        cout<<"\nCost Of One Server is: "<<cos;
        //GET Number of Servers.
        //1 Server can handle 20 guests, so FIND how much server required for No. of Guests you Entered.
        nos= Nog / 20;
        cout<<"\nYour Number Of servers is: "<<nos;
    }
    int costforfood()
    {
        //GET COST for FOOD.
        tfc=Nog * cod;
        cout<<"\nTotal Cost For Food is: "<<tfc;
    }
    int average()
    {
        //Get Average Cost Per Person
        ac=tfc / Nog;
        cout<<"\nYour Average Cost Per Person is: "<<ac;
    }
    int totalcost()
    {
        //GET TOTAL COST. 
        tc=tfc + (cos * nos);
        cout<<"\nYour Total Cost is: "<<tc;
    }
    void display()
    {
        cout<<"\nEvent Name Is: "<<name1;
        cout<<"\nEvent Owner Name Is: "<<name2;
        cout<<"\nYour Number Of Guest Is: "<<Nog;
        cout<<"\nYour Number OF Minutes In Event Is: "<<nom;
        cout<<"\nYour Cost Per Hour Is: "<<cph;
        cout<<"\nYour Cost Per Minutes Is: "<<cpm;
        cout<<"\nYour Cost For Dinner Is: "<<cod;
        cout<<"\nCost Of Your Server is: "<<cos;
        cout<<"\nNumber Of Servers You Need In Event Is: "<<nos;
        cout<<"\nYour Total Cost Of Food Is: "<<tfc;
        cout<<"\nYour Average Cost Of Food Per Person is: "<<ac;
        cout<<"\nYour Total Cost Of Event Is: "<<tc;

    }
};
int main()
{
    EventManegment em;
    em.Eventname();
    em.EventOwner();
    em.costestimate();
    em.numberofservers();
    em.costforfood();
    em.average();
    em.totalcost();
    em.display();
    return 0;

}