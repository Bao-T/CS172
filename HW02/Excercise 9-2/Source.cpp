#include <iostream>
#include <string>
#include "classes.h"
using namespace std;
int main()
{
	//////////////////////////////////////////////////////////////////////////// #9.6
	QuadraticEquations Q1; // Creats Class Object
	int a, b, c; // Sets variables for User input
	cout << "Enter a, b, and c: ";
	cin >> a; cin >> b; cin >> c;
	// Assigns variables correspondingly to SetA, SetB, & SetC functions to change private values in the object.
	Q1.setA(a);
	Q1.setB(b);
	Q1.setC(c);
	// Uses the discriminant function for the object to display the Discriminant
	cout << "The Discriminant is: " << Q1.getDiscriminant() << endl;
	cout << "Roots: \n";
	// Checks if Disciminant is non-negative
	if (Q1.getDiscriminant() >= 0)
	{
		if (Q1.getDiscriminant() == 0) // If Disciminant = 0, displays one root since both roots would be the same
			cout << Q1.getRoot1() << endl;
		else // Displays both roots since they will be different and Discriminant > 0
			cout << Q1.getRoot1() << endl << Q1.getRoot2() << endl;
	}
	else // For discriminant <0

	{
		cout << "The equation has no real roots. \n";
	}

	//////////////////////////////////////////////////////////////////////////// #9.11
	EvenNumber E1(16); // Makes object with argument 16 so value = 16
	cout << E1.getValue() << endl; // Displays E1 using the get value function
	EvenNumber E2 = E1.getNext(); // Assigns object E2 with a returning object from E1's getNext function
	cout << E2.getValue() << endl; // Displays E2 using the get value function
	EvenNumber E3 = E1.getPrevious();// Assigns object E3 with a returning object from E1's getPrevious function
	cout << E3.getValue() << endl; // Displays E3 using the get value function


	return 0;

}

