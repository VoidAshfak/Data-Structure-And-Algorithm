#include<iostream>
#include<math.h>
using namespace std;

int complement_int(int n)
{
    if(n == 0){
        cout << 12   <<endl;
        return 0;
    }
    int mask = 0;
    int m = n;
    while(m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;

}


int main()
{
    int n;
    cin >> n;
    complement_int(n);
return 0;
}

