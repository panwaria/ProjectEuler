#include<iostream>

using namespace std;

bool isPalindrome(double num)
{
     double temp = num;
     int numDigits = 0;
     while (temp >= 1)
     {
           temp /= 10;
           numDigits++;
     }
     
     char *str = new char [numDigits];     
     itoa((int)num, str, 10);
     
     char *begin = str;
     char *end = str + numDigits - 1;
/*     while(true)
     {
           if(*end == '0')
           {
                   end--;
                   continue;
           }
           else
               break;
     }
*/
     while (end > begin)
     {
           if(*begin++ != *end--)
           {
                delete[] str;  
                return false;
           }
     }
    
     delete[] str;
     return true;
}


int main()
{
    
//    int testcases[10] = {123321, 1000001, 9999999, 1412141, 1234321, 14566541, 1004001, 90, 6, 6556};
//    for (int i=0; i<10; i++)
//        cout<<isPalindrome(testcases[i])<<endl;
    
//    cout<<isPalindrome(1004001)<<endl;
    
    int n = 3; // Number of digits
    double upLimit = 1;
    for (int i=1; i<=n; i++)
    {   
        upLimit *= 10;
    }
    double downLimit = upLimit/10;
    upLimit -= 1;
    
    double MAX = 0;
    cout<<upLimit<<" "<<downLimit<<endl;
    for (double i = upLimit; i >= downLimit; i--)   // We should ideally look into numbers having reg. exp. as [1-0][0-9][1-9]
    {
        for (double j = i; j >= downLimit; j--)
         {
            double value = i*j;
            if( isPalindrome(value) == true && value > MAX)
            {
                 MAX = value;
            } 
        }
    }   
    
    cout<<MAX<<endl;
    
    return 0;
}

