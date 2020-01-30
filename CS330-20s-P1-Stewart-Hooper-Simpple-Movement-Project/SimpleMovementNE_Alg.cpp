#include "SimpleMovementNE_Alg.h"

float SimpleMovementNE_Alg::convertDegreesToRadians(float inputDeg)
{
	return inputDeg * (PI/180);
}

float SimpleMovementNE_Alg::perSecondDivision(float inputRad)
{
	return inputRad / currentTime;
}

// TODO:: This is not finished, but a start to how to do CSV (Comma seperated Variables)
bool SimpleMovementNE_Alg::writeRecordtoCSVFile(string outputFileName)
{
	try {
		ofstream file;
		file.open(outputFileName, ios_base::app);
		file << currentTime << "," << positionX << "," << positionZ << "," << velocityX << "," 
			<< velocityZ << "," << linearAccelerationX << "," << linearAccelerationZ << "," << convertDegreesToRadians(orientationInDeg) 
			<< "," << perSecondDivision(convertDegreesToRadians(rotationInDeg)) << endl;
		file.close();
		return true;
	}
	catch (...){
		return false;
	}
}

//TODO:: find out what all needs to be user input and what is generated in the algorithm and set constructor accordingly
SimpleMovementNE_Alg::SimpleMovementNE_Alg(float pSimulatedTime, float pDeltaTime, string pOutputFileName)
{
	simulatedTime = pSimulatedTime;
	currentTime = 0;
	deltaTime = pDeltaTime;
	positionX = 0;
	positionZ = 0;
	velocityX = 0;
	velocityZ = 0;
	linearAccelerationX = 0;
	linearAccelerationZ = 0;
	outputFileName = pOutputFileName;

}

void SimpleMovementNE_Alg::calculateNewtonEulerAlg()
{
}
