
#include <iostream>

#include "stdafx.h"
#include "pch.h"
#include "modul.h"

#define s 6
void Point::draw()
{
	cout << "\n" << "Draw point: " << x() << "." << y() << " \n ";
}

void location::draw()
{
	cout << "Draw location: " << x() << "." << y() << "\n\n";
}

void Rect::draw()
{
	cout << "Enter height rect:";
	cin >> *height;
	cout << "\nEnter width rect:";
	cin >> *width;
	cout << "\n" << "Draw rect: height:" << *height << " , width:" << *width << " \n ";
}

void Route::draw() {

	cout << "Enter Route from:";
	cin >> *from;
	cout << "\nEnter Route to:";
	cin >> *to;
}

int main()
{




	cout << "Running lcation...\n";
	cout << "..................\n";
	location *ap;
	location b;
	ap = &b;
	//	ap->draw();

	cout << "Running rect...\n";
	cout << "..................\n";
	Rect *pr;
	Rect Rectungle;
	pr = &Rectungle;
	//	pr->draw();

	cout << "Running Point...\n";
	cout << "..................\n";
	Point *pi;
	Point poi(1, 0);
	pi = &poi;
	//	pi->draw();


	Point *array[3];

	/*
	array[0] = &ap;
	array[1] = &pr;
	array[2] = &pi;
	*/

	array[0] = &b;
	array[1] = &Rectungle;
	array[2] = &poi;

	for (int i = 0; i < 3; i++) {


		array[i]->draw();

	}


	cout << "Running car,tree...\n";
	cout << "..................\n";
	car CarOne;
	tree TreeOne;

	cout << "Running Pline...\n";
	cout << "..................\n";
	Pline lineOne;
	cout << "Running Road...\n";
	cout << "..................\n";
	Road a;
	a.SetRoadName("RoadOne");


	cout << "Running Route...\n";
	cout << "..................\n";


	Route *pRoute;
	Route RouteOne;
	pRoute = &RouteOne;
	pRoute->draw();


	cout << "Running PPoint, Forest...\n";
	cout << "..................\n";
	PPoint polygon(2);
	Forest Trees(5);

	cout << "Running Rect, Map...\n";
	cout << "..................";
	Rect RectOne;
	Map Belarus;


	return 0;


}
