#include<bits/stdc++.h>
using namespace std;

void fib(int n){
    int a = 0, b = 1,sum = 0;
    if(n == 0){
        cout << 0;
        return;
    }
    cout << a << " " << b << " ";
    for(int i = 0; i < n; i++){
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
    }

}

int main(){
    int n;
    cin >> n;
    fib(n);
    return 0;
}