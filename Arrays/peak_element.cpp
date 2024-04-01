#include<iostream>
using namespace std;

int search_mountain(int arr[],int size){

    int start= 0, end = size-1;

    while(start<end){

        int mid = start + (end - start)/2;

        if((arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1])){
            return arr[mid];
        }

        else if(arr[mid] <= arr[mid+1]){
            start = mid;
        }
        else if (arr[mid] >= arr[mid+1]){
            end = mid;
        }

    }
    
}

int main(){


    int array[9] = {1,2,4,7,44,5,4,3,1};
    //int key = 35;
    int index = search_mountain(array, 9);
    cout << "The peak value " << index <<endl;
    return 0;

}