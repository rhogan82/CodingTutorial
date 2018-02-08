

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main()
{
	string make, model, fuel_type;
	int    year;

	make = "Chevrolet";
	model = "Camaro";
	fuel_type = "gasoline";
	year = 1990;

	Car camaro(make, model, year, fuel_type, 4, 1, 3405, false);
	
	camaro.Set_Color("black");
	camaro.miles_travelled = 315.6;		//miles
	camaro.fuel_used = 22.4;			//gallons


	cout << "The color of the car is: " << camaro.color << endl;
	cout << "The fuel mileage is: " << camaro.Fuel_Mileage() << endl;

	string inspace;
	if (camaro.in_space) {
		inspace = "in space";
	}
	else {
		inspace = "not in space";
	}

	cout << "The car is " << inspace << "!" << endl;

    return 0;
}

