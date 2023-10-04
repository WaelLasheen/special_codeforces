#include <bits/stdc++.h>
using namespace std;

void primeFactors(long long n)
{
    if(n%2==0){
    	while (n % 2 == 0)
    	{
    		n = n/2;
    	}
    	cout << 2 << "\n";
    }

	for (long i = 3; i <= sqrt(n); i = i + 2)
	{
		if(n%i==0){
		    while (n % i == 0)
    		{
    			n = n/i;
    		}
    		cout << i << "\n";
		}
	}

	if (n > 2)
		cout << n << "\n";
}

int main()
{
	long long n;
	cin>>n;
	primeFactors(n);
	return 0;
}
