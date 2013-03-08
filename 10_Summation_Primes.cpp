#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long num;
    cout << "Enter the number: ";
    cin >> num;

//    if(num <= 0)
//    {
//        cout << "Invalid Input. Exiting!";
//        return 1;
//    }

//    if(num == 1)
//    {
//       cout << "Ans: 2\n";
//       return 0;
//    }

//    vector<long> primeNums;
//    primeNums.push_back(2);
    long i = 3;
    
    long long sum1 = 2;
	long long sum2 = 0;
	long count = 1;

//    cout<<"Vector Size = " << primeNums.size() << endl;
	cout<<"Limit is: "<<num<<endl;
	cout<<"2 added\n";
    while(i < num)//sprimeNums.size() < num)
    {

        bool isPrime = true;
        //for (vector<long>::iterator it = primeNums.begin(); it != primeNums.end(); it++)
		double sqr = sqrt(i);
		for (int j = 3; j <= sqr; j++)
        {
            //if(i%(*it) == 0)
            if(i%((int)j) == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            cout << i << " added." << "\t Count = "<<count << endl;
 //           primeNums.push_back(i);
            
            if(count > 80000)
                sum2 += i;
			else
			    sum1 += i;
            
            count++;
        }

        i += 2;
    }

	cout<<"Limit was: "<<num<<endl;
    cout<<"\nSum1: "<< sum1<<endl;
    cout<<"\nSum2: "<< sum2<<endl;

	cout<<"Final Sum: "<<(sum1 + sum2)<<endl;
    return 0;
}
