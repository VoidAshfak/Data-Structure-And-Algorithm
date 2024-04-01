#include<iostream>
using namespace std;

int intersect_array(int arr1[],int N,int arr2[],int M){
    int i = 0,j = 0;
    while (i < N && j < M)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    

}
void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}


int main(){
    int size1;
    int size2;
    int arr1[10000],arr2[10000];
    cin >> size1 >> size2;
    //array 1 input
    input_array(arr1,size1);
    //array 2 input
    input_array(arr2,size2);


    intersect_array(arr1,size1,arr2,size2);

    return 0;   

}