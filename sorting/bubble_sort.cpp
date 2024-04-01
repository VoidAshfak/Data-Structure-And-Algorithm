#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}

int main(){

    int arr[5] = {2,3,2,5,1};
    sort(arr,5);
    printArr(arr,5);


}