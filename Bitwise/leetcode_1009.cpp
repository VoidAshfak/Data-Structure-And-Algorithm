#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0, i = 0;
    if(n == 0)
    {
        cout<< 1;
        return 0;
    }
    while(n != 0)
    {
        int bit = n&1;

        if(bit == 0)
        {
            sum += pow(2,i);
        }
        n = n >> 1;
        i++;
    }
    cout << sum;

return 0;
}
