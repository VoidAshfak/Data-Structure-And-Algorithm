#include<iostream>
using namespace std;

int main()
{
    int n = 15;
    long int ans = 0;
    long int a = 0;
    long int b = 1;
    cout << a << ' ' << b << ' ';
    for(int i=0;i<n;i++)
    {
        ans = a + b;
        cout << ans << ' ';
        a = b;
        b = ans;
    }

    return 0;
}
