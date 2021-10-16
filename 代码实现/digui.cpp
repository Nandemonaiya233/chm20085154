#include<iostream>
#include<stdio.h>
using namespace std;
int Factorial(int n)
{
	if (n==1)
	{
		return 1;
	}
	if (n==2)
	{
		return 2;
		
	}
 else
 {
 	return n * Factorial(n-1);
 }
}
int main()
{
	int a;
	cin >> a;
	cout << Factorial(a) << endl;
	return 0;
}
