#include <bits/stdc++.h>
using namespace std;

void print_array(int n,int arr[]){
    int i;
    for(i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}

void reverse_arr(int n,int arr[]){
    int start = 0,end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_array(size,arr);
    reverse_arr(size,arr);
    print_array(size,arr);
    return 0;

}
