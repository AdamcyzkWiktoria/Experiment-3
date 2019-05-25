#include<iostream>

using namespace std;

int main()
{
	int i;
	double tempA[7], tempB[7], tempC[7];
	
	for (i=0; i < 7; i++)
	{
		cout << "Enter all temperatures of Province A: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempA[i];
	}
	
	for (i=0; i < 7; i++)
	{
		cout << "Enter all temperatures of Province B: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempB[i];
	}
	
	for (i=0; i < 7; i++)
	{
		cout << "Enter all temperatures of Province C: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> tempC[i];
	}
	
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "Temperature for Province A, Day " << i+1 << " :" << tempA[i] << endl;
	}
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "Temperature for Province B, Day " << i+1 << " :" << tempB[i] << endl;
	}
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "Temperature for Province C, Day " << i+1 << " :" << tempC[i] << endl;
	}
	cout << endl;
	
	return 0;
}
