#include <iostream>
#include <cmath>
#include <map>

using namespace std;

#define LIMIT 1000000

map<long long, int> collatzMap;

long NumTerms (long long number)
{
	long long num = number;
	long count = 0;
	while (num != 1)
	{
		/*if((num & (num - 1)) == 0) // If number is power of 2
		{
//            cout<<"Square: num="<<num<<endl;
			count += (long)log2(num) + 1;
			break;
		}
		else*/
		 if(collatzMap.find(num) != collatzMap.end())//(collatzMap[num] != 0)
		{
//			cout<<"Yippie: number="<<number<<" num="<<num<<endl;
            count += collatzMap[num];
            break;
		}
		
		if(num %2 == 0)
		    num /= 2;
		else
		    num = 3*num + 1;

		count++;
	}

	collatzMap[number] = count;
	
	return count;
}

int main()
{
	long long NUM = 0;
	long MAX = 0;
//	map<double, int> collatzMap;// = new map<double, int>();
	
	//cache[1] = 1;
	collatzMap[1] = 1;
	for (long long int i = 2; i < LIMIT; i++)
	{
		long numTerms = NumTerms(i);
		
		cout<<"i="<<i<<"\t numTerms="<<numTerms<<endl;
		if(numTerms > MAX)
		{
			NUM = i;
			MAX = numTerms;
		}
	}
	
	cout<<"\nNUM="<<NUM<<endl;
	cout<<"\nMAX="<<MAX<<endl;
}
