#include <iostream>
#include <string>

using namespace std;

struct simpleMovementInputData {
	float simulatedTime;
	float deltaTime;
	string outputFileName;
};

int main() {
	
	//terminal header
	cout << "\n\n==========================================\n";
	cout << "====Basic Movement Algorithm Generator====\n";
	cout << "==========================================\n\n";
	
	//var to store input data
	simpleMovementInputData inputData;
	int algHolder;

	//get user input
	cout << "Enter Simulated Time: ";
	cin >> inputData.simulatedTime;
	cout << endl;

	cout << "Enter Delta Time: ";
	cin >> inputData.deltaTime;
	cout << endl;

	cout << "Enter Output File Name: ";
	cin >> inputData.outputFileName;
	cout << endl;

	cout << "Enter Algorithm Type (1: Newton Euler, 2: High School): ";
	cin >> algHolder;
	cout << endl;

	//run correct algorithm
	if (algHolder == 1) {
		//Newton Euler
	}
	else if (algHolder == 2) {
		//High school
	}
	else{
		cout << "\n\n==========================================\n";
		cout << "Invalid input\n";
		cout << "==========================================\n";
		exit(1);
	}

	return 0;
}