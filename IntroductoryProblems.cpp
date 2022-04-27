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
