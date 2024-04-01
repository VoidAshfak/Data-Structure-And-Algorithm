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
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            swap(arr[i],arr[minIndex]);
        }

    }
}

int main(){

    
    int arr[5] = {2,3,4,5,1};
    sort(arr,5);
    printArr(arr,5);


}