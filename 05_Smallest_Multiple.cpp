#include <iostream>
#include <cmath>

using namespace std;

long double lcm (long double a, long double b);
long double gcd (long double a, long double b);

long double breakArr (long double n1, long double n2)
{
	long double count = n2 - n1 + 1;
	
	if (count == 1)
	    return n1;
	else if (count == 2)
	{
		long double val = lcm(n1, n2);
        cout<<"======= n1="<<n1<<"\tn2="<<n2<<"\tlcm="<<val<<endl;
		return val;
	}
	else if (count > 2)
	{
        //cout<<"======= n1="<<n1<<"\tn2="<<n2<<endl;
		int mid = (int)((n1 + n2)/2);
		long double val = lcm( breakArr(n1, mid), breakArr(mid + 1, n2) );
        cout<<"======= n1="<<n1<<"\tn2="<<n2<<"\tlcm="<<val<<endl;
		return val;
	}
	
	return 0;
}
		
long double lcm (long double a, long double b)
{
	return (a*b)/gcd (a, b);
}

long double gcd (long double a, long double b)
{
    long double small = (a < b) ? a : b;
	long double squared = (long double) sqrt(small);

	for (int i = (int)small ; i >= 1; i--)
	{
		if (((int)a)%i == 0 && ((int)b)%i == 0)
		    return i;
	}
	
	return 1;
}

int main()
{
//	long double a[20];
//	for(long double i = 1; i <=20; i++)
//	    a[i] = i;

	long double num;
	
	cout << "Enter a number: ";
	cin >> num;

	cout << breakArr(1, num);
	return 0;
}
