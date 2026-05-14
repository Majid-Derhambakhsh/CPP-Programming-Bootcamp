#include <iostream>

using namespace std;

int analogRead()
{
	return 1;
}

void SampleAnalog()
{
	
	static unsigned int pinVoltage = 0;
	static unsigned int counter = 0;
	
	// Take Data from analogRead for Sampling
	pinVoltage += analogRead();
	counter++;
	
	if (counter >= 100)
	{
		pinVoltage /= 100;
		
		cout << pinVoltage << endl;
		
		pinVoltage = 0;
		counter = 0;
	}

}

int main()
{
	
	for (size_t i = 0; i < 1000; i++)
	{
		SampleAnalog();
	}

}
