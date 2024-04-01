#include<iostream>
using namespace std;

void swap_alt(int arr[],int size){

    int loop = size/2;
    int start = 0, next = 1;
    for(int i=0; i<loop;i++){
        swap(arr[start],arr[next]);
        start+=2;
        next+=2;
    }

}
void print_arr(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    swap_alt(arr,7);
    print_arr(arr,7);

}