#include<iostream>
using namespace std;


int BinarySearch(int arr[],int size,int key,int pivot){

    int start, end;
    if(arr[pivot] <= key && key <= arr[size-1]){
        start = pivot;
        end = size-1;
    }
    else{
        start = 0;
        end = pivot-1;
    }

    while(start<=end){

        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return -1;
    
}





int get_pivot(int arr[],int size){

    int start = 0, end = size-1;
    int mid = start+(end-start)/2;
    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;

    }
    return start;

}


int main(){

    int array[5] = {7,9,1,2,3};
    int key;
    cin >> key;
    int pivot = get_pivot(array,5);
    //10cout << "Pivot " << pivot <<endl;
    int index = BinarySearch(array,5,key,pivot);
    cout << "key is in index " << index <<endl;

    return 0;

}