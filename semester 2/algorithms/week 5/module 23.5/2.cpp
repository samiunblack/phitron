#include <bits/stdc++.h>
using namespace std;

int solve(int n, int s, vector<int>& a)
{
	if(n == 0 || s == 0)
	{
		if(s == 0) return 1;
		return 0;
	}

	if(a[n - 1] <= s)
	{
		int op1 = solve(n - 1, s - a[n - 1], a);
		int op2 = solve(n - 1, s, a);

		return op1 + op2;
	}
	else return solve(n - 1, s, a);
}

int findWays(vector<int>& arr, int k)
{
	return solve(arr.size(), k, arr);

}