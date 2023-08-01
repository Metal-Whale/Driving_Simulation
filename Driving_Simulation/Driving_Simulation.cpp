/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: Main
*/

#include "Vehicle.h"
#include "Sports_Car.h"
#include <iostream>
#include "Truck.h"


int main()
{
    Truck truck(20, "8800");

    cout << truck;

    Sports_Car car(120, "5", "Tesla", "Model X", "2023", "Midnight");

    cout << car << endl;

    Vehicle v("Car", "Sedan", "2023", "Green");

    cout << v << endl;


    Truck u_haul;

    u_haul.set_weight("12000");
    u_haul.set_cargo_size(26);
    u_haul.Set_Model("Moving Truck");
    cout << u_haul;

}

