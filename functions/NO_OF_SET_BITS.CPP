#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bit_counte(int num){
    int count = 0;
    while (num)
    {
        int bit = num & 1;

        if(bit){
            count++;
        }
        num = num >> 1;

    }
    return count;   

}


int main(){
    int a,b;
    cin >> a >> b;
    cout << "Total number of set bits in a and b: " << (bit_counte(a) + bit_counte(b)) << endl;


    return 0;
}