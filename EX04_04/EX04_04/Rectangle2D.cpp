#include "Rectangle2D.h"
#include <iostream>
#include <vector>
using namespace std;


//******************constructor1******************
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
	numberOfRectangles++;
	Collection.push_back(this);
	//Have created two extra function that calculate the number of rectangles and the number of objects in the collection after each function is executed
	cout << "Object added. Number of Rectangles: " << Rectangle2D::getNumberOfRectangles() << endl;
	cout << "Number of objects in Collection: " << Collection.size() << endl;
}
//******************constructor2******************
// A new rectanglw with new co=ordinates, height and width is created.
Rectangle2D::Rectangle2D(double newX, double newY, double newWidth, double newHeight)
{
	x = newX;
	y = newY;
	width = newWidth;
	height = newHeight;
	numberOfRectangles++;
	Collection.push_back(this);
	cout << "Object added. Number of Rectangles: " << Rectangle2D::getNumberOfRectangles() << endl;
	cout << "Number of objects in Collection: " << Collection.size() << endl;
}
// used to get the co-ordinate x 
double Rectangle2D::getX() const
{
	return x;
}
// used to get the co-ordinate y
double Rectangle2D::getY() const
{
	return y;
}
// used to get the width of rectangle
double Rectangle2D::getWidth() const
{
	return width;
}
// used to get the height of rectangle
double Rectangle2D::getHeight() const
{
	return height;
}
// used to set the x co-ordinate that is given by user as the new x co-ordinate
void Rectangle2D::setX(double newX)
{
	x = newX;
}
// used to set the y co-ordinate that is given by user as the new y co-ordinate
void Rectangle2D::setY(double newY)
{
	y = newY;
}
// used to set the width that is given by user as the new width
void Rectangle2D::setWidth(double newWidth)
{
	width = newWidth;
}
// used to set the height that is given by user as the new height
void Rectangle2D::setHeight(double newHeight)
{
	height = newHeight;
}
// used to give the area of the rectangle created
double Rectangle2D::getArea()
{
	return width * height;
}
// used to give the perimeter of the rectangle created
double Rectangle2D::getPerimeter()
{
	return 2 * (width + height);
}
// to check if the given rectangle contains the point x, y inside it or not
bool Rectangle2D::contains(double x, double y)
{
	// if the co-ordinate x is less than or equal to x+width/2 and greater than or equal to x-width/2
	if (x <= this->x + width / 2 && x >= this->x - width / 2)
		// if the co-ordinate y is less than or equal to y+width/2 and greater than or equal to y-width/2
		if (y <= this->y + height / 2 && y >= this->y - height / 2)
			// it returns true if the above statements are satisfied
			return true;
	// else it returns false
	return false;
}
// to check if the given rectangle contains the other rectangle inside it or not
bool Rectangle2D::contains(Rectangle2D &r)
{
	if ((this->x + width / 2) >= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() - r.getWidth() / 2))
		if ((this->y + height / 2) >= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
			return true;
	return false;
}
// to check if the given rectangle overlaps the other rectangle or not
bool Rectangle2D::overlaps(Rectangle2D &r)
{
	if ((this->x + width / 2) <= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) >= (r.getX() - r.getWidth() / 2))
		if ((this->y + height / 2) <= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) >= (r.getY() - r.getHeight() / 2))
			return true;
	if ((this->x + width / 2) >= (r.getX() + r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() + r.getWidth() / 2))
		return true;
	if ((this->x + width / 2) >= (r.getX() - r.getWidth() / 2) && (this->x - width / 2) <= (r.getX() - r.getWidth() / 2))
		return true;
	if ((this->y + height / 2) >= (r.getY() + r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
		return true;
	if ((this->y + height / 2) >= (r.getY() - r.getHeight() / 2) && (this->y - height / 2) <= (r.getY() - r.getHeight() / 2))
		return true;
	return false;
}
int Rectangle2D::getNumberOfRectangles()
{
	return numberOfRectangles;
}
// this function I wrote to calculate the number of objects in the given rectangle
vector<Rectangle2D*> Rectangle2D::getCollection()
{
	return Collection;
}


//destructor1
Rectangle2D::~Rectangle2D()
{
	numberOfRectangles--;
	Collection.erase(Collection.begin() + 3);
	cout << "Object has been deleted. Number of Rectangles remaining: " << Rectangle2D::getNumberOfRectangles() << endl;
	cout << "Number of objects remaining in Collection: " << Collection.size() << endl;




}
//destructor2
Rectangle2D::Rectangle2D(Rectangle2D &r)
{
	x = r.getX();
	y = r.getY();
	width = r.getWidth();
	height = r.getHeight();
	numberOfRectangles++;
	Collection.push_back(this);
	cout << "Object copied. Number of Rectangles: " << Rectangle2D::getNumberOfRectangles() << endl;
	cout << "Number of objects in Collection: " << Collection.size() << endl;
}