﻿
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








	car CarOne;
	tree TreeOne;

	
	Pline lineOne;

	Road a;
	a.SetRoadName("RoadOne");





	Route *pRoute;
	Route RouteOne;
	pRoute = &RouteOne;
	pRoute->draw();



	PPoint polygon(2);
	Forest Trees(5);

	Rect RectOne;
	Map Belarus;


	return 0;


}
