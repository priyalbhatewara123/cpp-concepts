/*
Take as input S, a string. Write a function that returns the character with maximum frequency.

Approach:
We will use hashing.
create a hash array of size 26
In this, when we traverse through the string, we would hash each character into an array of ASCII characters.
time complexity - O(n)
Space Complexity: O(1) — Because we are using fixed space (Hash array) irrespective of input string size.
*/

#include <bits/stdc++.h>
using namespace std;

char maxFreqChar(string s) {
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        count[(int)s[i] - 97] ++;
    }
    int maxFreq = 0;
    int index = -1;
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxFreq) {
            maxFreq = max(maxFreq , count[i]);
            index = i;
        }

    }
    return (char)(index + 97);
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    cout << maxFreqChar(s);
    return 0;
}
