/*
	This test scoring program does not accept test scores
	that are less than 0 or greater than 100.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//----Constants for grade thresholds----------------------

	const int	A_Score = 90,
		B_Score = 80,
		C_Score = 70,
		D_Score = 60,
		MIN_Score = 0,		// Minimum valid score
		MAX_Score = 100;	// Holds Maximum score

	int testScore; // Holds a numeric test score

	//----(Display)-Get the numeric test score------------------

	cout << "Enter your numeric test score and i will\n"
		<< "tell you the letter grade you earned: ";
	cin >> testScore;

	//----Validate the input and determine the grade-------------

	if (testScore >= MIN_Score && testScore <= MAX_Score)
	{
		if (testScore >= A_Score)
			cout << "Your grade is A. \n";
		else if (testScore >= B_Score)
			cout << "Your grade is B. \n";
		else if (testScore >= C_Score)
			cout << "Your grade is C. \n";
		else if (testScore >= D_Score)
			cout << "Your grade is D_Score \n";
		else
			cout << "Your grade if F. \n";
	}
	else
	{
		//---An Invalid score was entered.
		cout << "That is an invalid score. Run the program \n"
			<< "again and enter a value in the range of \n"
			<< MIN_Score << " through " << MAX_Score << ".\n";
	}
    return 0;
}

