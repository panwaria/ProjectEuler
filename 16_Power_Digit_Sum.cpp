#include <iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	long long double ans = 1<<num;
	
	cout<<"Output is: ";
	cout<<ans;
}
