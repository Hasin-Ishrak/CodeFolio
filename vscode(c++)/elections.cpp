#include <bits/stdc++.h>

using namespace std;

int ele(int best, int num1, int num2)
{
	return max(0, max(num1, num2) + 1 - best);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		cout <<ele(a, b, c) << ' ' <<ele(b, a, c) << ' ' <<ele(c, a, b) <<endl;
	}

}
