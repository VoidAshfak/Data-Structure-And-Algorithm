#include<iostream>
using namespace std;

int main()
{
    int n = 17;
    int Count = 0;
    while(n)
    {
        if((n&1) == 1)
        {
            Count++;
        }
        n = n >> 1;
    }
    cout << Count <<endl;
    return 0;
}

