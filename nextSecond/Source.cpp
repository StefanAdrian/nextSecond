///Given some time output the time after one second.

#include<iostream>
#include<vector>

using namespace std;

vector<int> nextSecond(vector<int> currentTime);

int main()
{
	//test

	vector<int> currentTime = { 23, 59, 59 };

	currentTime = nextSecond(currentTime);
	cout << "The time after one second is: " << currentTime[0] << ":" << currentTime[1] << ":"
		<< currentTime[2] << endl;

	currentTime = nextSecond(currentTime);
	cout << "The time after one second is: " << currentTime[0] << ":" << currentTime[1] << ":"
		<< currentTime[2] << endl;
}

vector<int> nextSecond(vector<int> currentTime) {
	if (currentTime[2] == 59)
	{
		currentTime[2] = 0;
		currentTime[1] += 1;
	}
	else
	{
		currentTime[2] += 1;
	}
	if (currentTime[1] == 60)
	{
		currentTime[1] = 0;
		currentTime[0] += 1;
	}
	if (currentTime[0] == 24)
	{
		currentTime[0] = 0;
	}

	return currentTime;
}