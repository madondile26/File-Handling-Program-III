/*TEST 4 File Handling Program(Supplementary).cpp : This file contains the 'main' function. Program execution begins and ends there.
  Name: X-Nardo
  Surname : Madondile
  Occupation : Programming Agent
  Rank : General
  Place of Work : Skhotheni Empire University of Artifitial and Criminal Intellegence
  For More Info on How to Become a Programming Lord Contact Me at This Phone Number : 0624230237
  If My Phone Goes to Voicemail Then SORRY!!!....Try Again Next Year....
*/

#include <fstream>
#include<math.h>
#include <iostream>
using namespace std;

double totalSeriesCapacitance(double capacitors[], int size)
{
	// Declare and initialise variables.
	double total = 0;
	double totalCapacitance = 0.0;

	for (int i = 0; i < size; i++)
	{
		totalCapacitance = 1 / (1 / capacitors[i]); // Total series capacitance calculation.
	}

	total += totalCapacitance; // Append the total series capacitance result to the total variable using the addition compound operator.

	return total; // Return the total to the main function.
}

void voltageDropAcrossCapacitors(double total, double supplyVoltage, double capacitors[], int size)
{
	double voltageDrop[7];

	ofstream fout;
	fout.open("file.txt", ios::out); // Open the file in write mode.

	if (!fout)
	{
		cout << "ERROR OPENING FILE!!!...."; // Display this message if the file cannot be accessed.
		exit(1);
	}
	else {

		// Print out this message to the screen if no errors occured while trying to open the file.
		cout << "\nFile write operation performed successfully!!!....\n" << endl;

		// Write all your results in table format to the file.txt file.
		fout << "-------------------------------------" << endl;
		fout << "Capacitance Values\t\tVoltage Drop" << endl;
		fout << "-------------------------------------" << endl;
		for (int i = 0; i < size; i++)
		{
			voltageDrop[i] = supplyVoltage * (total / capacitors[i]);
			fout << capacitors[i] << "\t\t\t\t\t\t" << voltageDrop[i] << endl;
		}
		fout << "-------------------------------------" << endl;

		fout.close();
	}
}

int main()
{
	// Declare and initialise variables.
    double capacitors[7];
	double total = 0.0;
    int Option = 0;

	while (Option != 4)
	{
		cout << "\nPlease enter the number of your choice out of the following options:\n" << endl;
		cout << "(1) Enter seven positive capacitance values." << endl;
		cout << "(2) Calculate the value of the total series capacitance." << endl;
		cout << "(3) Calculate the voltage drop across each of the seven capacitors." << endl;
		cout << "(4) Exit the program!!!...\n" << endl;
		cin >> Option;

		if (Option == 1)
		{
			// Prompt the user to enter seven capacitance values.
			cout << "\nEnter seven capacitance values:\n" << endl;

			for (int i = 0; i < 7; i++)
			{
				cout << "Capacitance value # " << i + 1 << ": ";
				cin >> capacitors[i];

				while (capacitors[i] < 0) // Input validation while loop to check whether the user has entered a positive value or not.
				{
					cout << "Error!!!...The capacitance value you've just entered does not satisfy validation..." << endl;
					cout << "Please enter a positive capacitance value: ";
					cin >> capacitors[i];
				}
			}
		}

		if (Option == 2)
		{
			// Call the total series capacitance fuction while passing as argument the capacitors array.
			total = totalSeriesCapacitance(capacitors, 7);

			// Display the results on screen in a neat table format.
			cout << "------------------------------------------------" << endl;
			cout << "Capacitance Values\tTotal Series Capacitance" << endl;
			cout << "------------------------------------------------" << endl;
			for (int i = 0; i < 7; i++)
			{
				cout << capacitors[i] << "\t\t\t" << total << endl;
			}
			cout << "------------------------------------------------" << endl;
		}

		if (Option == 3)
		{
			double supplyVoltage = 12;

			// Call the voltage drop function while passing as argument the total series capacitance, supply voltage, and the capacitors array.
			voltageDropAcrossCapacitors(total, supplyVoltage, capacitors, 7);
		}

		if (Option == 4)
		{
			// Provides the only point of exit from the program.
			cout << "-------------------------YOU'VE JUST EXITED THE PROGRAM!!!...-------------------------" << endl;
		}
	}
}
