/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: Header file for Truck class
*/


#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	Truck();
	Truck(int cargo, string weight);
	Truck(int speed, string acceleration, string make, string model, string year, string color);
	~Truck() override;
protected:
	int m_cargo_size;
	string m_weight;

public:

	void set_cargo_size(int size);
	int get_cargo_size();
	void set_weight(string weight);
	string get_weight();
	
	//string Print_Vehicle_Status(Vehicle &v) override;

	//friend function that utilizes overloaded operator to print class type and members 
	friend ostream& operator<<(ostream& os, const Truck& t)
	{

		return os << "(" << typeid(t).name() << " : " << endl
			<< t.m_cargo_size << " Ft ," << endl
			<< t.m_weight << "Lbs" << endl
			<< t.m_model << endl
			<< ")" << endl;
	};
};

