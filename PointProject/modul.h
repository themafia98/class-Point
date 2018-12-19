#pragma once
#include <iostream>
using namespace std;

#define SizePoints 15
#define namecar 20
#define cnumber 20
#define typet 15
#define plinebuff 20
#define roadnamesize 15

class Point {
private:
	double x_value, y_value;
public:


	Point(double x = 0.0, double y = 0.0) {
		x_value = x;
		y_value = y;
	}


	double x() {
		return x_value;
	}

	double y() {
		return y_value;
	}

	virtual void draw();

};

class location : public Point {
public:

	virtual void draw();
};

class car : public Point {
private:
	char name[namecar];
	char number[cnumber];

public:

	car() {}

	void SetName(char n[])
	{
		strcpy_s(name, sizeof(name), n);
	}

	void SetNumber(char sn[])
	{
		strcpy_s(name, sizeof(name), sn);
	}


	car(char n[], char sn[]) {
		SetName(n);
		SetNumber(sn);
	}

};

class tree : public Point {
private:
	char typeTree[typet];
	int height;

public:
	tree() {}

	void SetType(char n[])
	{
		strcpy_s(typeTree, sizeof(typeTree), n);
	}

	double Height() {
		return height;
	}
};


class Pline : public Point {
private:
	Point *pb;
	Point buf[plinebuff];


public:
	Pline() {}
	Pline(int size) {
		pb = new Point[size];

	}

	~Pline() {
		delete[] pb;
	}

};

class PPoint : public Point {
private:
	Point *ppoints;
	Point points[SizePoints];
public:
	PPoint() {}

	PPoint(int size) {
		ppoints = new Point[size];
	}

	~PPoint() {
		delete[] ppoints;
	}
};

class Forest : public PPoint {
private:
	Point *pForest;
public:
	Forest() {}

	Forest(int amount) {
		pForest = new Point[amount];
	}

	~Forest() {
		delete[] pForest;
	}
};


class Route : public Pline {
private:

	double *from;
	double *to;

public:

	Route()
	{
		from = new double;
		to = new double;
	}



	~Route() {
		delete from;
		delete to;
	}

	virtual void draw();
};

class Road : public Pline {
private:
	char RoadName[roadnamesize];

public:

	Road() {}

	void SetRoadName(const char n[])
	{
		strcpy_s(RoadName, sizeof(RoadName), n);
	}

	Road(const char n[])
	{
		SetRoadName(n);
	}

};

class Rect : public Point
{
private:
	double *height, *width;
public:

	Rect() {
		height = new double;
		width = new double;

	}

	virtual void draw();

	~Rect() {
		delete  height;
		delete  width;
	}
};


class Map : public Rect
{
private:
	double *radius;
public:
	Map() {
		radius = new double;
	}

	~Map() {
		delete radius;
	}

};

