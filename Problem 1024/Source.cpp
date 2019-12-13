// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// LightOJ - Problem 1024 - EID
// Problem Statement - http://lightoj.com/volume_showproblem.php?problem=1024
// Main.cpp


#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	priority_queue <int> pq;
	int testCases, userInput, day;

	cin >> testCases;
	for (int i = 1; i <= testCases; i++)
	{
		cin >> userInput;
		for (int i = 0; i < userInput; i++)
		{
			cin >> day;
			pq.push(day);
		}
		cout << "Case " << i << ": " << pq.top() << endl;
	}

	cout << endl;
	return 0;
}