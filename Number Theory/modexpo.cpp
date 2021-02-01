/*
(9)
Modular Exponentation
Given three numbers a,b,c. Calculate (a^b)mod c.
Constraints
1<=a,b,c<=100000
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fast_power(ll a, ll b , ll c) {

	if (b == 0)
		return 1;

	//calculate small ans same for odd and even power
	ll small_ans = fast_power(a, b / 2 , c);
	small_ans *= small_ans;

	//if n is odd
	if (b & 1)
		return (a * small_ans) % c;
	else
		return (small_ans) % c;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll a, b, c;
	cin >> a >> b >> c;

	cout << fast_power(a, b, c);
	return 0;
}