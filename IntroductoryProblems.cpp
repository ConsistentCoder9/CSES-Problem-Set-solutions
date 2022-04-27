									//1.Weird Algorithm:

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
						//2.Missing Number
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	ll a[n - 1];
	arrscan(a, n - 1)
	ll xor1 = 0;
	ll xor2 = 0;
	for (ll i = 1; i <= n; ++i)
	{
		xor1 ^= i;
	}
	f1(i, 0, n - 1)
	{
		xor2 ^= a[i];
	}
	cout << ( xor1 ^ xor2) << nl;
	return 0;
}
