/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: CPP file for Sports_Car class
*/


#include "Sports_Car.h"
#include <iostream>
#include <sstream>

Sports_Car::Sports_Car() = default;

Sports_Car::Sports_Car(int speed, string top_acceleration)
	: top_speed{ speed }, Zero_to_Sixty{ std::move(top_acceleration) }{}

// Initialized constructor list demonstrates inherited members and utilizes std::move to pass string by rvalue 
Sports_Car::Sports_Car(int speed, string acceleration, string make, string model, string year, string color)
	: Vehicle(make, model, year, color), top_speed{ speed }, Zero_to_Sixty{ std::move(acceleration) }{}

Sports_Car::~Sports_Car() = default;



/*
string Sports_Car::Print_Vehicle_Status(Sports_Car &car) override
{
	
	std::stringstream ss;
	ss << car.
}
*/