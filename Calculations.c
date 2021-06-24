// ------------------------------------------------------------------------------------------
// Name: Neina Cichon
// Abstract: Mathmatical Calculations
// Date: 2020-09-11
// ------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes – built-in libraries of functions
// --------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

// --------------------------------------------------------------------------------
// Constants
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// User Defined Types (UDT)
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Prototypes
// --------------------------------------------------------------------------------
void DisplayInstructions( );
void DisplayMessage( int intPrintCount );
int GetLargerValue(int intValue1, int intValue2);
int GetLargestValue(int intValue1, int intValue2, int intValue3, int intValue4, int intValue5, int intValue6, int intValue7);
double CalculateSphereVolume(int intDiameter);
void PassIntByPointer(int* pintValue1);
void SolvePythagoreanTheorem(float* psngA, float* psngB, float* psngC);
float FindQuadraticRoots(int intA, int intB, int intC, float* psngRoot1, float* psngRoot2);
void DisplayFirst20Factorials();


// --------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the program starts
// --------------------------------------------------------------------------------
void main()
{

	int intLargerValue = 0;
	int intLargestValue = 0;
	double dblVolume = 0;
	int intValue1 = 0;
	float sngA = 3.0;
	float sngB = 4.0;
	float sngC = 0.0;
	int intA = 1;
	int intB = 5;
	int intC = 6;
	float sngRoot1 = 0;
	float sngRoot2 = 0;
	float sngQuadResult = 0;


	//Problem #1 - Display Instructions
	printf("Problem #1 - Display Instructions\n");
	DisplayInstructions( );
	printf("\n");

	//Problem #2 - Display Message
	printf("Problem #2 - Display Message X times\n");
	DisplayMessage( 10 );
	printf("\n");

	//Problem #3 - Get Larger Value
	printf("Problem #3 - Display larger of 2 values\n");
	intLargerValue = GetLargerValue(5, 10);
	printf("The larger value is %d\n", intLargerValue);
	printf("\n");

	//Problem #4 - Get Largest of 7 Values
	printf("Problem #4 - Display largest of 7 values\n");
	intLargestValue = GetLargestValue(5, 9, 2, 7, 6, 1, 8);
	printf("The largest value is %d\n", intLargestValue);
	printf("\n");

	//Problem #5 - Get volume of a sphere
	printf("Problem #5 - Display volume of a sphere\n");
	dblVolume = CalculateSphereVolume(8);
	printf("The volume of the sphere is %f\n", dblVolume);
	printf("\n");

	//Problem #6 - Change contents at address with pointer
	printf("Problem #6 - Change contents at address with pointer\n");
	PassIntByPointer(&intValue1);
	printf("The value changed from 0 to %d\n", intValue1);
	printf("\n");

	//Problem #7 - Get missing side with Pythagorean Theorem
	printf("Problem #7 - Get missing side with Pythagorean Theorem\n");
	SolvePythagoreanTheorem(&sngA, &sngB, &sngC);
	printf("A= %f, B= %f, C= %f\n", sngA, sngB, sngC);
	printf("\n");

	//Problem #8 - Find Quadratic Roots 
	printf("Problem #8 - Find Quadratic Roots\n");
	sngQuadResult = FindQuadraticRoots(intA, intB, intC, &sngRoot1, &sngRoot2);
	if (sngQuadResult == 1)
	{
		printf("Root 1: %f, Root 2: %f\n", sngRoot1, sngRoot2);
	}
	else if (sngQuadResult == 0)
	{
		printf("Root is: %f\n", sngRoot1, sngRoot2);
	}
	else 
	{
		printf("No roots in real numbers\n");
	}
	printf("\n");


	//Problem #9 - Display 20 Factorials 
	printf("Problem #9 - Factorials 1 - 20: \n");
	printf("-------------------------------------------------\n");
	DisplayFirst20Factorials();
	printf("\n");

	//Problem #10 - Factorial from User Input
	printf("Problem #10 - Factorial from User Input: ");
	int intUserInteger = 0;
	do
	{
		printf("\nEnter a number between 1 and 100: ");
		scanf_s("\n%d", &intUserInteger);

	} while (intUserInteger < 1 || intUserInteger > 100);
	DisplayUserFactorial(intUserInteger);
	printf("\n");
	printf("\n");

	system("pause");
}


// --------------------------------------------------------------------------------
// Name: DisplayInstructions
// Abstract: Tell user what is going on
// --------------------------------------------------------------------------------

void DisplayInstructions( )
{

	printf("This program will demonstrate how to makeand use procedures in C.\n" );
	printf("In addition it will demonstrate how to pass valuesand variables into\n");
	printf("a procedure as parameters.It will demonstrate how to return a value\n");
	printf("from a function using the return keyword.It will demonstrate how to\n");
	printf("emulate passing variables by reference using pointers.\n");

}


// --------------------------------------------------------------------------------
// Name: DisplayMessage
// Abstract: Print message X number of times
// --------------------------------------------------------------------------------
void DisplayMessage(int intPrintCount)
{
	
	int intIndex = 0;

	for( intIndex = 1; intIndex <= intPrintCount; intIndex +=1)
	printf("I Love Star Trek!\n");
}


// --------------------------------------------------------------------------------
// Name: GetLargerValue
// Abstract: Return larger of 2 values
// --------------------------------------------------------------------------------
int GetLargerValue(int intValue1, int intValue2)
{

	int intLargerValue = 0;

	if (intValue1 > intValue2)
	{
		intLargerValue = intValue1;
	}
	else
	{
		intLargerValue = intValue2;
	}
	return intLargerValue;
}



// --------------------------------------------------------------------------------
// Name: GetLargestValue 
// Abstract: Return largest of 7 values
// --------------------------------------------------------------------------------
int GetLargestValue(int intValue1, int intValue2, int intValue3, int intValue4, int intValue5, int intValue6, int intValue7)
{

	int intLargestValue = 0;

	if (intValue1 > intValue2 && intValue1 > intValue3 && intValue1 > intValue4 && intValue1 > intValue5 && intValue1 > intValue6 && intValue1 > intValue7)
	{
		intLargestValue = intValue1;
	}
	else if (intValue2 > intValue3 && intValue2 > intValue4 && intValue2 > intValue5 && intValue2 > intValue6 && intValue2 > intValue7)
	{
		intLargestValue = intValue2;
	}
	else if (intValue3 > intValue4 && intValue3 > intValue5 && intValue3 > intValue6 && intValue3 > intValue7)
	{
		intLargestValue = intValue3;
	}
	else if (intValue4 > intValue5 && intValue4 > intValue6 && intValue4 > intValue7)
	{
		intLargestValue = intValue4;
	}
	else if (intValue5 > intValue6 && intValue5 > intValue7)
	{
		intLargestValue = intValue5;
	}
	else if (intValue6 > intValue7)
	{
		intLargestValue = intValue6;
	}
	else
	{
		intLargestValue = intValue7;
	}
	return intLargestValue;
}



// --------------------------------------------------------------------------------
// Name: CalculateSphereVolume 
// Abstract: Calculates the volume of a sphere.
// --------------------------------------------------------------------------------
double CalculateSphereVolume(int intDiameter)
{

	double dblVolume = 0;
	double dblPi = 3.14159265359;
	double dblRadius = (intDiameter / 2.00);

	dblVolume = (4.00 / 3.00) * dblPi * (dblRadius * dblRadius * dblRadius); //need decimals, otherwise it thinks they are integers
	return dblVolume;
	
}



// --------------------------------------------------------------------------------
// Name: PassIntByPointer  
// Abstract: Calculates the volume of a sphere.
// --------------------------------------------------------------------------------
void PassIntByPointer(int* pintValue1)
{
	*pintValue1 = 5;
}



 //--------------------------------------------------------------------------------
 //Name: SolvePythagoreanTheorem  
 //Abstract: Calculates missing side
 //--------------------------------------------------------------------------------
void SolvePythagoreanTheorem(float* psngA, float* psngB, float* psngC)
{
	if (*psngA == 0.0)
	{
		*psngA = sqrt((*psngC * *psngC) - (*psngB * *psngB));
	}
	else if (*psngB == 0.0)
	{
		*psngB = sqrt((*psngC * *psngC) - (*psngA * *psngA));
	}
	else
	{
		*psngC = sqrt((*psngA * *psngA) + (*psngB * *psngB));
	}
}



// --------------------------------------------------------------------------------
// Name: FindQuadraticRoots   
// Abstract: Find Quadratic Roots 
// --------------------------------------------------------------------------------
float FindQuadraticRoots(int intA, int intB, int intC, float* psngRoot1, float* psngRoot2)
{
	float sngDiscriminant = 0;
	float sngQuadResult = 0;

	sngDiscriminant = (intB * intB) - 4 * (intA * intC);

	if (sngDiscriminant > 0)
	{
		*psngRoot1 = (-intB + sqrt(sngDiscriminant)) / (2 * intA);
		*psngRoot2 = (-intB - sqrt(sngDiscriminant)) / (2 * intA);
		sngQuadResult = 1;
	}
	else if (sngDiscriminant == 0)
	{
		*psngRoot1 = -intB / (2 * intA);
		*psngRoot2 = *psngRoot1;
		sngQuadResult = 0;
	}
	else
	{
		sngQuadResult = -1;
	}
	return sngQuadResult;
}



// --------------------------------------------------------------------------------
// Name: DisplayFirst20Factorials   
// Abstract: Display Factorials 1-20
// --------------------------------------------------------------------------------
void DisplayFirst20Factorials()
{
	int intCounter = 1;
	unsigned long long intFactorialLow = 1; //1!
	unsigned long long intFactorialHigh = 3628800; // 10!

	for (intCounter = 1; intCounter <= 10; intCounter += 1)
	{
		intFactorialLow = intCounter * intFactorialLow;
		intFactorialHigh = (intCounter + 10) * intFactorialHigh;
		printf("%d! =\t %llu\t\t\t", intCounter, intFactorialLow);
		printf("%d! =\t %llu\t\t\n", intCounter + 10, intFactorialHigh);
	}
}



// --------------------------------------------------------------------------------
// Name: DisplayUserFactorial  
// Abstract:
// --------------------------------------------------------------------------------
int DisplayUserFactorial(int intUserInteger)
{
	int intCounterA = 1;
	unsigned long long intFactorial = 1;

	
	for (intCounterA = 1; intCounterA <= intUserInteger; intCounterA += 1)
	{
			intFactorial = intCounterA * intFactorial;
	}
	if (intUserInteger <= 20)
	{
		printf("%d! =\t %llu\n\n\n", intCounterA - 1, intFactorial);
	}
	else
	{
		printf("There is no data type that will hold numbers this length.\n");
	}



}