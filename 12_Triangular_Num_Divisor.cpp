#include <iostream>
#include <cmath>

using namespace std;

long divisorCount(long long num)
{
	if(num <= 0)
		return 0;
		
    long divCount = 0;//(num == 1) ? 1 : 2;

	double sqr = sqrt(num);
    for( double i = 1; i <= sqr; i++)
    {
		if(num % ((long)i) == 0)
			divCount += 2;
	}
	
    if (sqr * sqr == num)
	{
        divCount--;
    }
    
	return divCount;
}


int main()
{
	long numDivs;
	cout << "Enter the number: ";
	cin >> numDivs;
	
	if(numDivs == 1)
	{
		cout<<"First triangular number with 1 divisor = 1\n";
		return 0;
	}
	
	long n = 1;
	long long num = 0;
	long divCount = 0;
	
	while (divCount < numDivs)
	{
		num += n;// (n * (n + 1)) / 2;

		divCount = divisorCount(num);
		cout<<"Divisor count for "<<num << " is "<<divCount <<endl;
		
//		if (divCount == numDivs)
//		{
//			cout<<"First triangular number with "<<numDivs<<" divisors = "<<num <<endl;
//			break;
//		}

		n++;
	}
	
	cout<<"First triangular number with over "<<divCount<<" divisors = "<<num <<endl;
	
	
	return 0;
}
