// This program will calculate the mpg of a car
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int tank; // the number of gallons of a full tank
	int distance; // the distance a car is able to travle on a full tank
	int mpg; // the mpg of the vehicle 
	cout << "How many gallons can you tank hold? \n";
	cin >> tank;
	cout << "How far can you go on a full tank\n";
	cin >> distance;
	mpg = distance / tank;
	cout<< "Your car's mpg is:" << mpg << endl;

	system("PAUSE");
	return 0; 
}