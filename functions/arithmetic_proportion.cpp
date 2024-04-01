#include<iostream>
using namespace std;

int AP_answer(int n){
    return ((3*n)+7);
}



int main(){
    int n;
    cin >> n;

    cout << "3*" << n << " +7 = " << AP_answer(n);


    return 0;
}