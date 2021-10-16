#include<iostream>
#include<stdio.h>
 using namespace std;
  int jieti(int a)
  {
  	if (a <= 0)
  	{
  		return 0;
	  }
	  if (a == 1)
	  {
	  	return 1;
	  }
	  if (a == 2)
	  {
	  	return 2;
	  }
	  else
	  {
	  	return jieti(a - 1) + jieti (a - 2);
	  }
  }
  int main()
  {
  	cout << jieti(10) << endl;
  	return 0;
  }
  
