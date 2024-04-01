#include<iostream>
#include<math.h>
using namespace std;
bool power_of_two(int n)
{
    for(int i=0; i<=31; i++)
    {
        int ans = pow(2,i);
        if(ans == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    cin >> num;
    cout << power_of_two(num) <<endl;
    return 0;
}
