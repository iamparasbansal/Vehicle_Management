#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
using namespace std;

struct time
{
    int hh;
    int mm;
    int ss;
    char col1;
    char col2;
};

struct date
{

};

class vehicle
{
    string pltno;
    int type;
    date dt;
    time arrive;
    time departure;

public:
    void addVehicle();
    void deleteVehicle();
    void printvehicle(vehicle v);
    void show();

};


vector<vehicle> veh(100);
int static totalvehicle=0,totalcar=0,totalbike=0,totalamt=0,i=0;

fstream file;

void vehicle::addVehicle()
{

}

int computeTimeDifference(time t1,time t2)
{

}

void vehicle:: deleteVehicle()
{

}


void vehicle::printvehicle(vehicle v)
{

}

void vehicle::show()
{
    cout<<"Vehicle Type\t\tVehicle Number\t\t\tDate\t\t\tArrival Time"<<endl;
    for(int j=0;j<i;j++)
    {
        printvehicle(veh[j]);
    }
}



void totalveh()
{
    cout<<"Total number of vehicle parked : "<< totalvehicle<<endl;
    cout<<"Total number of car parked : "<< totalcar<<endl;
    cout<<"Total number of bike parked : "<<  totalbike<<endl;
}

void totalamount()
{
    cout<<"Total Collection till now : "<<totalamt<<endl;
}


int main()
{
    int choice;
    char ans;
    system ( "cls" ) ;

  do
  {
     system ( "cls" ) ;
     cout<<"********************************************************************"<<endl;
     cout<<"                 VEHICLE PARKING RESERVATION SYSTEM                 "<<endl;
     cout<<"1. Arrival of a vehicle"<<endl
         <<"2. Total number of vehicles parked"<<endl
         <<"3. Departure of vehicle"<<endl
         <<"4. Total Amount collected "<<endl
         <<"5. Display "<<endl
         <<"6. Exit"<<endl
         <<"********************************************************************"<<endl
         <<"Enter your Choice : ";
         cin>>choice;

         switch(choice)
         {
             case 1: system ( "cls" ) ;
                     cout<<"Add : "<<endl;
                     veh.at(i).addVehicle();
                     break;

             case 2: system ( "cls" ) ;
                     totalveh();
                     break;

             case 3: system ( "cls" ) ;
                     cout<<"Departure : "<<endl;
                     veh.at(i).deleteVehicle();
                     break;

             case 4: system ( "cls" ) ;
                     totalamount();
                     break;

             case 5: system ( "cls" ) ;
                     veh.at(i).show();
                     break;
             case 6: exit(0);
         }

         cout<<"\nDo you want to continue, press y/n : "<<endl;
         cin>>ans;
         if(ans=='n')
         {
             break;
         }
         else
         {
             continue;
         }

  }while(1);

  return 0;
}
