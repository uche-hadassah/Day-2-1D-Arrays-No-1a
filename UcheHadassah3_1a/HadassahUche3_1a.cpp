/*Copying an array:
a) Write a program that reads 10 positive numbers from the user into an array and 
copies it in another array. The program should output the copied array.*/
#include<iostream>
using namespace std;
int main()
{
	int Original[10];
	int Copy[10];
	int num;
	cout << "Enter 10 positive numbers:";
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		while (num < 0)
		{
			cout << "Invalid! Please enter a POSITIVE number:";
				cin >> num;
		}
		Original[i] = num;
		Copy[i] = Original[i];
	}
	return 0;
}
