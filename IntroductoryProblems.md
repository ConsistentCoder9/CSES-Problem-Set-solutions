Weird Algorithm:
/*    Rabbi Zidni Ilma    */
 
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
 
#define 	nl 						"\n"
#define 	pb 						push_back
#define 	f1(i,a,b) 				for(ll i=a;i<b;++i)
#define 	f2(i,a,b)				for(ll i=a;i<=b;++i)
#define     arrscan(arr,n)			f1(i,0,n) cin>>arr[i];
#define 	all(p)         			p.begin(), p.end()
#define 	bug(...)      			__f (#__VA_ARGS__, __VA_ARGS__)
 
ll binexp(ll a, ll b)
{
	if (b == 0)
		return 1;
	if (b % 2 == 0)
	{
		ll res = binexp(a, b / 2);
		res = res * res;
		return res;
	}
	else
	{
		ll res = binexp(a, ((b - 1) / 2));
		res = res * res * a;
		return res;
	}
}
 
bool prime(int n)
{
	if (n == 1)
		return false;
	if (n == 2 || n == 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i = 6 + i)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	cout << n << " ";
	while (n != 1)
	{
		//cout << n << " ";
		if (n & 1)
		{
			n = 3 * n + 1;
			cout << n << " ";
		}
		else if ((n & 1) == 0)
		{
			n /= 2;
			cout << n << " ";
		}
	}
	cout << nl;
	return 0;
}
