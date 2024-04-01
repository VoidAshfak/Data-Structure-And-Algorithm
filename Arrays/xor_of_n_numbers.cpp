// C++ program to find XOR of numbers
// from 1 to n.
#include <bits/stdc++.h>
using namespace std;
int computeXOR(int n)
{
	if (n == 0)
		return 0; // base case
	int uni = 0;
	for (int i = 1; i <= n; i++) {
		uni = uni ^ i; // calculate XOR
	}
	return uni;
}
int main()
{
	int n = 6;
	int result = computeXOR(n);
	cout << result << endl;
	return 0;
}
/* This code is contributed by Rishab Dugar */
