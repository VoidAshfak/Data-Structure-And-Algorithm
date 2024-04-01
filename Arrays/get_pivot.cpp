#include<iostream>
using namespace std;

int find_pivot(int arr[],int size){

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
    return arr[start];

}



int main(){

    int array[5] = {7,9,1,2,3};
    cout <<"Pivot is = " <<  find_pivot(array,5) <<endl;

    return 0;
}