/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: Header file for Vehicle Class
*/


#pragma once
#ifndef Vehicle_h
#define Vehicle_h

#include <string>
#include <iostream>
#include <typeinfo>
#include <ostream>

using namespace std;


class Vehicle {

public:
	Vehicle();
	Vehicle(string make, string model, string year, string color);
	virtual ~Vehicle() = default;
protected:
	[[maybe_unused]] double accelerate{};
	[[maybe_unused]] double decelerate{};
	string m_make{};
	string m_model{};
	string m_year{};
	string m_color{};
	//const char* m_vin{};
	struct Location {
		int x{0};
		int y{0};
	};
	bool ignition_{false}; //On or Off 
	//enum shift { N, P, D, R }; //0,1,2,3


public:
	void Set_Ignition(bool starter);
	bool Get_Ignition();
	void Set_Shift(int gear); //0,1,2,3
	int  Get_Shift();
	void Set_Location(int x, int y);
	int  Get_Location(); //Returns x and y values for 2D Grid Class
	void Set_Make(string make);
	string Get_Make();
	void Set_Model(string model);
	string Get_Model();
	void Set_Year(string year);
	string Get_Year();
	void Set_Color(string color);
	string Get_Color();

	//virtual string Print_Vehicle_Status() = 0; //Pure Virtual Function - Implementation delegated to sub class

	//friend function that utilizes overloaded operator to print class type and members 
	friend ostream& operator<<(ostream& os, const Vehicle& v)
	{
		return os << "( " << typeid(v).name() << " : " << endl

			<< v.m_make << "," << endl
			<< v.m_model << "," << endl
			<< v.m_year << "," << endl
			<< v.m_color << endl
			<< ")" << endl;
	};
	
};

#endif
