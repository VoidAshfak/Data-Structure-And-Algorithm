#include<iostream>
using namespace std;
// void print_arr(int arr[],int size){
//     for(int i=0; i<size;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
int function(int nums[],int size){

    int count_array[100000] = {0};

    for(int i=0;i<size;i++){
        count_array[nums[i]]++;
    }
    for(int i=0;i<100000;i++){
        if(count_array[i] > 1){
            cout << i << " ";
        }
    }
    
}



int main(){

    int nums[1000];
    int N;
    cin >> N;
    for(int i=0; i<N;i++){
        cin >> nums[i];
    }
    function(nums,N);

    return 0;

}