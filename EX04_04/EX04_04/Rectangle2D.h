/////////////////////////
//Program Name: EX04_04
//Name: Sarah Kirsten
//Class and Section: CS172-1
//Date: 10/23/2016
///////////////////////

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

static int numberOfRectangles = 0;

class Rectangle2D
{
public:
	Rectangle2D();
	Rectangle2D(double, double, double, double);
	~Rectangle2D();
	Rectangle2D(Rectangle2D &);
	double getX() const;
	double getY() const;
	double getWidth() const;
	double getHeight() const;
	void setX(double);
	void setY(double);
	void setWidth(double);
	void setHeight(double);
	double getArea();
	double getPerimeter();
	bool contains(double, double);
	bool contains(Rectangle2D &);
	bool overlaps(Rectangle2D &);
	static int getNumberOfRectangles();
	static vector<Rectangle2D*> getCollection();


private:
	double x, y, width, height;
};
static vector<Rectangle2D*> Collection;
