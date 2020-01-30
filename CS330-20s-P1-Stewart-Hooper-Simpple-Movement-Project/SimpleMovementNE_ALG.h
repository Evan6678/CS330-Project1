#pragma once

#include <iostream>    
#include <math.h>       
#include <fstream>
#include <string>


using namespace std;

#define PI 3.14159265
/*
	Purpose: execute and write output to CSV file for Newton Euler simple movement algorithm
*/
class SimpleMovementNE_Alg
{
private:
	float simulatedTime;				//Input simulated time to run
	float currentTime;					//current time in the simulation	
	float deltaTime;					//change in time per step
	float positionX;					//current position of entity on X plane
	float positionZ;					//current position of entity on Z plane
	float velocityX;					//current velocity of entity on X plane
	float velocityZ;					//current velocity of entity on Z plane
	float linearAccelerationX;			//current linear Accleration of entity on X plane
	float linearAccelerationZ;			//current linear Accleration of entity on Z plane
	float orientationInDeg;				//current orientation of the entity's travel for next time step in degrees
	float rotationInDeg;				//current ammount of rotation to perform in next time step in degreen *radians per second*
	float angularAccelerationInDeg;		//current rate of change of rotation *radians per second per second*

	string outputFileName;				//name of file you wish to output to

	float convertDegreesToRadians(float inputDeg);			//will take degrees values and convert them to radions
	float perSecondDivision(float inputRad);				//will take in a radian input and divide by current time to get *radians per second*
	bool writeRecordtoCSVFile(string outputFileName);		//will take the trajectory data and write to CSV file, false return = failure, true return = success

public:
	SimpleMovementNE_Alg(float pSimulatedTime, float pDeltaTime, string pOutputFileName);	//will take a struct of required input data and load the class data
	void calculateNewtonEulerAlg();															//run the simulation and print the data out
};

