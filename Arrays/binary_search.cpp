#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){

    int start= 0, end = size-1,i=1;

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
        cout << "loop "<< i << endl;
        i++;

    }
    return -1;
    
}

int main(){


    int array[9] = {1,2,4,7,9,11,35,86,100};
    int key = 35;
    int index = BinarySearch(array, 9, key);
    cout << "The index of " << key << " is: " << index <<endl;
    return 0;

}