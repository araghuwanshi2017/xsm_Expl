#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define f(a , b) for(auto i = a;i < b;i++)

int main()
{
	ll n,sum = 0;
	cin >> n;

	vector < ll > vect;
	f(0, n)
	{
		ll a;
		cin >> a;
		vect.push_back(a);
		sum = sum|a;
	}

	f(0, n)
	{
		sum = sum - sum|vect[i];
	}
	cout << sum << "\n";


}