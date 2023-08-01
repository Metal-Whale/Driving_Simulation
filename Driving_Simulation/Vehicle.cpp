/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: CPP file for Vehicle Class
*/



#include "Vehicle.h"
Vehicle::Vehicle() = default;

// Initialized constructor list demonstrates inherited members and utilizes std::move to pass string by rvalue 
Vehicle::Vehicle(string make, string model, string year, string color)
	: m_make{std::move(make) }, m_model{ std::move(model) }, m_year{ std::move(year) }, m_color{ std::move(color)} {};

void Vehicle::Set_Make(string make)
{
	Vehicle::m_make = std::move(make);
}

string Vehicle::Get_Make()
{
	return m_make;
}

void Vehicle::Set_Model(string model)
{
	Vehicle::m_model = std::move(model);
}

string Vehicle::Get_Model()
{
	return m_model;
}

void Vehicle::Set_Year(string year)
{
	Vehicle::m_year = std::move(year);
}

string Vehicle::Get_Year()
{
	return m_year;
}

void Vehicle::Set_Color(string color)
{
	Vehicle::m_color = std::move(color);
}

string Vehicle::Get_Color()
{
	return m_color;
}

void Vehicle::Set_Ignition(bool starter)
{
	Vehicle::ignition_ = starter;
}

bool Vehicle::Get_Ignition()
{
	return ignition_;
}

/*
string Get_Vin(Vehicle &v)
{
	return v.m_vin;
}
*/


