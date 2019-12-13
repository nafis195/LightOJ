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
	string testcase[testCases];
	int b[testCases];
	for (int i = 1; i <= testCases; i++)
	{
		cin >> userInput;
		for (int j = 0; j < userInput; j++)
		{
			cin >> day;
			pq.push(day);
		}
		
		
		 testcase[i]={"Case "};
		 b[i]=pq.top();
		 
	}
	for(int k=1;k<=testCases;k++)
	{
		cout << testcase[k]<<k<< ": " <<b[k]<<endl;
	}

	cout << endl;
	return 0;
}
