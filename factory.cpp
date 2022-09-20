/* factory design pattern*/
/*fatory creates a object without exposing logic creation to the client*/
/*loosely coupled system*/
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

class vehicleFactory
{
 public:
 static Vehicle* getVehicle(string vehicleType)
 {
     Vehicle* vehicle;
     if(vehicleType == "car")
    {
        vehicle = new car();
    }
    else if(vehicleType == "bus")
    {
        vehicle = new bus();
    }
    
    return vehicle;
 }
};

int main()
{
    Vehicle* vehicle;
    string vehicleType;
    cin>>vehicleType;
    vehicle =vehicleFactory :: getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
}
