#include<bits/stdc++.h>
using namespace std;

// O(2^n) time | O(n) space
int fib(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    return fib(n-1) + fib(n-2);
}

// O(n) time | O(n) space
int memoized_fib(int n, unordered_map<int, int> &map){
    if(map.find(n) != map.end()) {
        return map[n];
    }
    map[n] = memoized_fib(n-1, map) + memoized_fib(n-2, map);
    return map[n];
}

//
int fibonacci(int n) {
    // vector<int> lastTwo = {0, 1};
    int lastTwo[2] = {0, 1};
    int counter = 3;

    while(counter <= n) {
        int nextFib = lastTwo[0] + lastTwo[1];
        lastTwo[0] = lastTwo[1];
        lastTwo[1] = nextFib;
        counter++;
    }
    return lastTwo[1];
}


int main()
{
    unordered_map<int,int> map({{1,0}, {2,1}});

    cout << fibonacci(10) << endl;
    // cout << memoized_fib(10, map) << endl;
    // cout << fib(6) << endl;
}