// PrimeNumberCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

bool CheckPrime(int num)
{
	bool flag = true;
	for(int i=2;i<num/2;i++)
		if (num % i == 0)
		{
			break;
			flag = false;

		}
	return flag;
}

int main()
{
	int number;
	printf("Please enter the number\n"); 
	scanf_s("%d", &number);
	if (CheckPrime(number) == true)
	{
		printf("Number is prime\n");
	}
	else
	{
		printf("Number is not prime\n");
	}
   
}

