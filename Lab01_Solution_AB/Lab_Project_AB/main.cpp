#include <iostream>
using namespace std;

int main()
{
	const int DONUTS_PER_BOX = 12;
	int numBoxes;
	int numDonuts;

	//Get the number of donut boxes
	cout << "How many boxes of donuts do you have? ";
	cin >> numBoxes;

	//Calculate the nmber of donuts
	numDonuts = numBoxes * DONUTS_PER_BOX;

	//Output the number of donuts 
	cout << "You have " << numDonuts << " donuts" << endl;

	return 0;
}

