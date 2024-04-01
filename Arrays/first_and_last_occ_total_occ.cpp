#include<iostream>
using namespace std;

int first_and_last_occ(int arr[],int size,int key){

    int start = 0, end = size-1,first_occ,last_occ;
    while(end>=start){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            first_occ = mid;
            end = mid - 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
    }

    start = 0, end = size-1;
    while(end>=start){
        int mid = start + (end-start)/2;
        if(key == arr[mid]){
            last_occ = mid;
            start = mid + 1;
        }
        if(key < arr[mid]){
            end = mid - 1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
    }

    cout << "First occurrence at index "<< first_occ << " Last occurrence at index "<< last_occ <<endl;
    cout << "Total Occurrence = " << last_occ - first_occ + 1 <<endl;
}

int main(){
    
    int array[10] = {1,2,3,3,3,4,4,5,6};
    int key = 4;
    first_and_last_occ(array,10,key);

    

    return 0;
}