#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    if(num > 0){
        for(int i = 1; i<=num;i++){
            ans = ans * i;
        }
    }
    return ans;
}

int nCr(int n,int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));

}



int main(){
    
    int n,r;
    cin >> n >> r;
    cout << n << "C"<< r << " is = " << nCr(n,r) << endl;
    return 0;

}


 