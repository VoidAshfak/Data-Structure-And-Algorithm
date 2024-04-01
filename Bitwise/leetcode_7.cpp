#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int i = 0, ans = 0;

    while(x!=0)
    {
        //for exception case
        if((ans > INT_MAX/10) || (ans < INT_MIN/10))
        {
            cout << 0;
            return 0;
        }
        int digit = x%10;
        ans = ((ans*10) + digit);
        i++;
        x=x/10;
    }
    cout << ans;

    return 0;
}
