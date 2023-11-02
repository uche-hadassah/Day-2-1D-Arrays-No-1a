/*Copying an array:
a) Write a program that reads 10 positive numbers from the user into an array and 
copies it in another array. The program should output the copied array.*/
#include<iostream>
using namespace std;
int main()
{
	int Original[10];
	int Copy[10];
	cout << "Enter 10 positive numbers:";
	for (int i = 0; i < 10; i++)// Get 10 numbers from user
	{
		cin >> Original[i];
	}
	for (int j = 0; j < 10; j++)//Copy the  array
	{
		Copy[j] = Original[j];
	}
	cout << "The new array is: " << endl;
	for (int k = 0; k < 10; k++)//Outputs the copied array
	{
		cout << Copy[k] << " ";
	}
	cout << endl;
	return 0;
}
