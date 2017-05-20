//Brendan Burke
//ECE 2620
//Lab 1
#include <iostream>
#include <cmath>
#define PI (4*atan(1)) //Defines an exact value for Pi
using namespace std;

void menu() {
	cout << "(1) Compute the radius of the circle" << endl;
	cout << "(2) Compute the circumference of the cirlce" << endl;
	cout << "(3) Compute the area of the circle" << endl;
	cout << "(4) Exit" << endl;
} //Menu function outputs text for the four options to the screen

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
} /*Distance function calculates the distance between two points
	according to the given equation (points x1,y1 and x2,y2 as parameters)*/

double radius(double x1, double y1, double x2, double y2) {
	return distance(x1, y1, x2, y2);
} //Radius function calls the distance function to return the circle radius

double circumference(double rad) {
	return 2*PI*rad;
} //Circumference function, with radius as a parameter, returns circumference

double area(double rad) {
	return PI*rad*rad;
} //Area function, with radius as a parameter, returns circle area

int main()
{
	double x1, y1, x2, y2, dist, rad, circ, area1; //declare variables
	cout << "Please enter the coordinates for the center of the circle: " << endl;
	cout << "x= "; //when prompted, user inputs x and y values for coordinates
	cin >> x1;
	cout << "y= ";
	cin >> y1;
	cout << "Please enter the coordinates for another point on the circle: " << endl;
	cout << "x= ";
	cin >> x2;
	cout << "y= ";
	cin >> y2;
	dist = distance(x1,y1,x2,y2);
	cout << "The distance between these points is " << dist << endl;
	int option; //declare variable
	menu(); //user is prompted with menu options printed to screen
	cout << "Select an operation: ";
	cin >> option; //user inputs an option
while(option != 4){

	switch (option) {

	case 1: //if option 1,then compute circle radius
	rad = radius(x1,y1,x2,y2);
	cout << "The radius of the circle is " << rad << endl;
		break;

	case 2: //if option 2,then compute circumference
	circ = circumference(rad);
	cout << "The circumference of the circle is " << circ << endl;
		break;

	case 3: //if option 3,then compute area
	area1 = area(rad);
	cout << "The area of the circle is " << area1 << endl;
		break;

	case 4: //exit
		break;

	default: //try again with a valid input
	cout << "Not Valid" << endl;
		break;
}
menu();
cin >> option;
}
return 0;
}

