#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            if ((pow(i, 2) + pow (j,2)) == pow (1000 - i - j, 2))
            {
                cout << "a = "<<i<<"\tb = "<<j<<"\tc = "<<(1000 - i - j)<<"\nabc = "<< (i * j * (1000 - i - j))<<endl;
                return 0;
            }
        }
    }
    return 0;
}

