/*
Author: Andre Colin Chavez
Date: 07/26/2023
Assignment: Vehicle Base Class and Inheritance
Description: CPP file for Truck class
*/


#include "Truck.h"
#include "Vehicle.h"

Truck::Truck() = default;

Truck::Truck(int cargo, string weight)
	: m_cargo_size{ cargo }, m_weight{ std::move(weight) }{}

// Initialized constructor list demonstrates inherited members and utilizes std::move to pass string by rvalue 
Truck::Truck(int cargo, string weight, string make, string model, string year, string color)
	: Vehicle(make, model, year, color), m_cargo_size{ cargo }, m_weight{ std::move(weight) }{}

Truck::~Truck() = default;

void Truck::set_cargo_size(int size)
{
	Truck::m_cargo_size = size;
}

int Truck::get_cargo_size()
{
	return m_cargo_size;
}

void Truck::set_weight(string weight)
{
	Truck::m_weight = std::move(weight);
}

string Truck::get_weight()
{
	return m_weight;
}