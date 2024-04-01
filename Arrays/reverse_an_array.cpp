#include<iostream>
using namespace std;

int reverse_array(int arr[], int size){
    int start = 0, end = size-1;
    for(;start<end;start++,end--){
        // int temp;
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);
    }
    // while(start < end){
    //     int temp;
    //     temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }
    
}
void print_arr(int arr[],int size){
    for(int i=0; i<10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print_arr(arr,10);
    reverse_array(arr,10);
    print_arr(arr,10);
    
    return 0;
}