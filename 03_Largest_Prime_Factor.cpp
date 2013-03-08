#include <iostream>
#include<cmath>

using namespace std;

bool isPrime(double num)
{
     double numSqrt = ceil(sqrt(num));
//     cout<<"num = " << num << " numSqrt= "<<numSqrt<<endl;
     if(num == 2)
            return true;

     if(num == 0 || num == 1)
            return false;       
     
     for (int i = 2; i <= numSqrt; i++)
     {
         if((int)num%i == 0)
            return false;
     }
     
     return  true;
}

long double MAX = 0.0;
void getLargestPF(long double num, long double start)
{
     cout<<"\nnum= "<<num<<" start= "<<start<<endl;
    if (isPrime(num) == true)
    {
        if (num > MAX) MAX = num;
        //cout<<num; 
        return;
    }
    
    long double half = ceil(num/2);
    cout<<"half= "<<half<<endl;
    for (long double i = 2; i < half; i++)
    {
        long double res = num /i;
        int resInt = (int)res;
        long double diff = res - resInt;

//        cout << i << " " << res << " " << resInt << " " << diff << endl;
        /* if ( ((int)num) % ((int)i) == 0) -- THIS TECHNIQUW DOESN'T O+WORK WITH LARGE INTEGERS */
        if (diff == 0)
        {
            getLargestPF(num/i, i);           
            break; // No need to continue as 'i' is the miminum primer factor and we will now 
                   // find out PRIME FACTOR using the result of division. 
        }
    }
}

int main()
{
    long double num = 600851475143.0 ;

    getLargestPF(num, 2);
    cout << MAX;
    return 0;
}
    
