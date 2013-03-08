#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num = 10;
	int sum = 0;
	long sumOfSquare = 0;
	long squareOfSum = 0;
	
	for (int i = 1 ; i<= num; i++)
	{
		sumOfSquare += pow(i, 2);
		sum += i;
	}
	    
	squareOfSum = pow(sum, 2);

	cout <<"sumOfSquare="<<sumOfSquare<<"\tsum="<<sum<<"\tsquareOfSum="<<squareOfSum<<endl;
	long diff = squareOfSum - sumOfSquare;
	
	cout<<"Diff is: "<<diff;
	
	return 0;
}
	
