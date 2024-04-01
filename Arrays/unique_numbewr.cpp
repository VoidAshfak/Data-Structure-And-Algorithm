#include<iostream>
using namespace std;

int find_unique(int arr[], int n){
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    return result;

}


int main(){

    
    int arr[1000] = {0};
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << find_unique(arr,size);

}