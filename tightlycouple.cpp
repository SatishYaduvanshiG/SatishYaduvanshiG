/* tightly coupled*/
#include <iostream>
using namespace std;
class Vehicle
{
 public:
 virtual void createVehicle()=0; //pure virtual function
};

class car : public Vehicle
{
    void createVehicle()
    {
        cout<<"creating a car ..."<<endl;
    }
    
};

class bus : public Vehicle
{
    void createVehicle()
    {
        cout<<"creating a bus ..."<<endl;
    }
};

int main()
{
    Vehicle* vehicle;
    string vehicleType;
    cin>>vehicleType;
    if(vehicleType == "car")
    {
        vehicle = new car();
    }
    else if(vehicleType == "bus")
    {
        vehicle = new bus();
    }
    vehicle->createVehicle();

    return 0;
}
