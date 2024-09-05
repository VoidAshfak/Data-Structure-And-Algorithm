#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string s, int start, int end) {
    // base case
    if (start >= end) return true; // if string is 0 or 1 char long
    if(s[start] != s[end]) return false;

    return isPalindrom(s, start + 1, end - 1);
}

int main() {
    string s = "1";
    string result = isPalindrom(s, 0, s.length()-1) == 1 ? "Palindrom" : "Not Palindrom";
    cout << result << endl;
}