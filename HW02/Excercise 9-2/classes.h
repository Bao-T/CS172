#include <iostream>
#include <string>
using namespace std;
//////////////////////////////////////////////////////////////////////////// #9.2
class Fan {
private:
	// Variables can only be accessed through the functions
	// That way speed cannot be changed to an invalid value
	int speed;
	// Radius cannot be negative so a mutator is used
	double radius;
	bool on;
public:
	// Constructor
	Fan()
	{
		speed = 1;
		on = true;
		radius = 5;
	}
	// Accessor Functions return the state of each variable, no arguments
	int getFanSpeed() { return speed; }
	bool getFanOn() { return on; }
	double getFanRadius() { return radius; }
	// Mutator Functions
	void changeFanSpeed(int x) // argument value is speed value
	{
		if (x >= 1 && x <= 3) // Fan speed can only be between 1 and 3
			speed = x; // changes fan speed
		else // if less than 1 or greater than 3
			cout << "Speed cannot be changed to that value. \n";
	}
	void changeFanOn(bool x) // argument value sets state for on variable
	{
		on = x;
	}
	void changeFanRadius(double x) // argument sets value for radius
	{
		if (x >= 0) // if x is non negative change radius value
		radius = x;
		else // if negative
		cout << "Radius cannot be changed to that value. \n";
	}
};
//////////////////////////////////////////////////////////////////////////// #9.6
class QuadraticEquations
{
private:
	int a,b,c;
public:
	// Constructor sets all values a,b,c to 1
	QuadraticEquations() {
		a, b, c = 1;
	}
	// Accessor Functions
	int getA() { return a; }
	int getB() { return b; }
	int getC() { return c; }
	
	int getDiscriminant()// Disciminant based on a,c values in the object
	{
		int x = pow(b, 2) - 4 * a * c; // Discriminant function
		return x;
	}
	// Discriminant <0 will return 0 (Wont be called in main function with if else statement evaluating if getDiscriminant == 0)
	// Discriminant == 0 will return the same roots from both getRoot1 and getRoot2 functions
	// Discriminant > 0 will return the different roots from both getRoot1 and getRoot2 functions
	double getRoot1()// gets the first root
	{
		if (getDiscriminant() < 0)
			return 0;
		else // only finds root if discriminant is non-negative
		{
			double r1 = (-1 * b + sqrt(getDiscriminant())) / (2 * a);
			return r1; // returns root
		}
	}
	double getRoot2()
	{
		if (getDiscriminant() < 0)
			return 0;
		else // only finds root if discriminant is non-negative
		{
			double r2 = (-1 * b - sqrt(getDiscriminant())) / (2 * a);
			return r2; // returns root
		}
	}
	// Functions change private values of a,b,c through their functions.
	void setA(int x) { a = x; }
	void setB(int x) { b = x; }
	void setC(int x) { c = x; }


};
//////////////////////////////////////////////////////////////////////////// #9.11
class EvenNumber {
private:
	int value; // set to private in order for it not to be assigned an odd value
public:
	// Constructors
	EvenNumber() { value = 0; } // default constructor sets value to 0
	EvenNumber(int x) // If argument, checks if x is even, if not, value is not assigned
	{ 
		if (x % 2 == 0)
			value = x;
		else
			cout << "Not and Even Number \n";
	}
	// Accessor Function
	int getValue() { return value; }
	EvenNumber getNext() { return EvenNumber(value + 2); } // returns object by calling constructor with initial value in argument and adding 2.
	EvenNumber getPrevious() { return EvenNumber(value - 2); }// returns object by calling constructor with initial value in argument and subtracting 2. 
	
};