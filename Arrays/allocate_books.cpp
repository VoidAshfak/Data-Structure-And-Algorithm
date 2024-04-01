//PROBLEM STATEMENT:
// https://www.codingninjas.com/codestudio/problem-details/allocate-books_1090540

#include<iostream>
using namespace std;
bool validity_check(int arr[],int size,int pred,int std){
    int temp = 0,count=1;

    for(int i=0;i<size;i++){
        if(temp + arr[i] <= pred){
            temp += arr[i];
        }
        else{
            count++;
            if(count > std || arr[i] > pred){
                return false;
            }
            temp = arr[i];
        }
    }
    return true;

}


int binarySearch(int arr[],int size,int pages,int student){
    int s = 0, e = pages, ans = -1;
    int predict = s+(e-s)/2;
    while(s<e){
        
        if(validity_check(arr,size,predict,student)){
            ans = predict;
            e = predict - 1;
        }
        else{
            s = predict + 1;
        }
        predict = s+(e-s)/2;

    }
    return ans;

}

int main(){

    int pages[4] = {10, 20, 30, 40};
    int student = 2;
    int total_pages = 0;
    //expected output 113
    for(int i=0;i<4;i++){
        total_pages += pages[i];
    }
    cout << binarySearch(pages,4,total_pages,student) << endl;


    return 0;
}