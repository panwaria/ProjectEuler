#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(num <= 0)
    {
        cout << "Invalid Input. Exiting!";
        return 1;
    }

    if(num == 1)
    {
        cout << "Ans: 2\n";
        return 0;
    }

    vector<long> primeNums;
    primeNums.push_back(2);
    long i = 3;

//    cout<<"Vector Size = " << primeNums.size() << endl;
    while(primeNums.size() < num)
    {
    
        bool isPrime = true;
        for (vector<long>::iterator it = primeNums.begin(); it != primeNums.end(); it++)
        {
            if(i%(*it) == 0)
            {   
                isPrime = false;
                break;
            }   
        }
    
        if(isPrime)
        {
//            cout << i << " added to the list." << endl;
            primeNums.push_back(i);
        }

        i += 2;
    }

    cout<<"\nAns: "<< i-2<<endl;

    return 0;
}
