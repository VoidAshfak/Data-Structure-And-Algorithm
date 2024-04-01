#include<iostream>
using namespace std;

int sqrt(int num){

    int start = 0, end = num;
    int mid = start+(end-start)/2;
    int ans = -1;
    while(start < end){
        int sq = mid*mid;

        if(sq == num){
            return mid;
        }
        else if(sq > num){
            end = mid-1;
        }
        else{
            ans = mid; //this line is important
            start = mid+1;
        }
        mid = start+((end-start)/2);
    }
    return ans; 

}


int main(){
    int x;
    cin >> x;
    cout << "Sqrt of " << x << " = " << sqrt(x) <<endl;

    return 0;

}