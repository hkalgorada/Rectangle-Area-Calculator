/*
	Hannah Kendall Alexa Gorada

	recSolid.cpp

	Prompt user for length, width, & height of a rectangular solid,
	calculate its volume and surface area, and display the results
*/

// Header Files
#include <iostream>
using namespace std;

int main()
{
	// Variables
	double length, width, height, volume, surface_area;

	// Intro
	cout << "Rectangular Solid Geometry App ..." << endl << endl;

	// Prompt user for length, width, & height
	cout << "Please enter rectangle's height: ";
	cin >> height;
	cout << "                         length: ";
	cin >> length;
	cout << "                          width: ";
	cin >> width;

	// Calculate volume
	volume = length * width * height;

	// Display result
	cout << "The volume is " << volume << " units." << endl;

	// Calculate surface_area
	surface_area = (2 * length * height) + (2 * width * height) + (2 * width * length);

	// Display result
	cout << "The surface area of the rectangle is " << surface_area << " units." << endl;

	return 0;
}