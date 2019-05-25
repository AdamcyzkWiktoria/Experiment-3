#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int num, data[10], i;
	double average, sum;
	
	cout << setprecision(2) << fixed << showpoint;
	for (i=0; i < 10; i++)
	{
		cout << "Enter number: " << i+1 << endl;
		cin >> data[i];
	}
	
	for (i=0; i < 10; i++)
	{
		sum = sum + data[i];
	}
	cout << endl;
	cout << "Sum of all number are: " << sum << endl;
	
	average = sum / 10;
	
	cout << "Average of all numbers: " << average << fixed << endl;
	
	for (i=0; i < 10; ++i)
	{
		if (data[0] < data[i])
		{
			data[0] = data [i];
		}
	}
	cout << "Largest number is: " << data[0] << endl;
	
	return 0;
}
