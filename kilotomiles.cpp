// a program that converts kilometers to miles


#include <iostream>
using namespace std;

int main()
{
	float kilometers;
	float miles;
	
	cout << "kilometers: ";
	cin >> kilometers;

	miles = kilometers * 0.621;

	cout << "number of miles: " << miles << endl;

	return 0;

}


