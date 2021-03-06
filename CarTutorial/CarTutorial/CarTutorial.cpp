
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

	Car* mycar = &camaro;

	cout << "My car has an mpg of: " << mycar->Fuel_Mileage() << endl;

	mycar->miles_travelled = 200;

	cout << "Now my car has an mpg of: " << mycar->Fuel_Mileage() << endl;
	cout << "Camaro also has an mpg of: " << camaro.Fuel_Mileage() << endl;

	Car mynewcar = camaro;
	mynewcar.color = "red";

	cout << "My new car is: " << mynewcar.color << endl;
	cout << "The camaro's color is: " << camaro.color << endl;


    return 0;
}

