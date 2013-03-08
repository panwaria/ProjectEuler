#include <iostream>

using namespace std;

int main()
{
    int f1 = 1;
    int f2 = 2;
    int f3 = 0;
    
    int sum = 2;
    
    while(true)
    {
          f3 = f1 + f2;
          f1 = f2; f2 = f3;
                        
          if(f3 > 4000000)
                break;     
                
          if(f3 %2 == 0)
                sum += f3;
    }
    
    cout<<sum;

    return 0;
}
