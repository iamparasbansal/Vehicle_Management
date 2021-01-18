#include<iostream>
#include<vector>
#include<windows.h>
#include<fstream>
using namespace std;

struct time
{

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

int main()
{
    
    return 0;
}
