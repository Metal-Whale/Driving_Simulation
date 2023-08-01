/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: Header file for Sports_Car Class
*/

#pragma once
#include "Vehicle.h"
class Sports_Car : public Vehicle
{
public: 
	Sports_Car();
	Sports_Car(int speed, string acceleration);
	Sports_Car(int speed, string acceleration, string make, string model, string year, string color);
	~Sports_Car() override;
protected:
	int top_speed;
	string Zero_to_Sixty;


public:
	//string Print_Vehicle_Status(Vehicle &v) override;

	//friend function that utilizes overloaded operator to print class type and members 
	friend ostream& operator<<(ostream& os, const Sports_Car& c)
	{

		return os << "(" << typeid(c).name() << " : " << endl
			<< c.Zero_to_Sixty << " seconds ," << endl
			<< c.top_speed << " MPH" << "," << endl
			<< c.m_make << "," << endl
			<< c.m_model << "," << endl
			<< c.m_year << "," << endl
			<< c.m_color << endl
			<< ")" << endl;
	};
};

