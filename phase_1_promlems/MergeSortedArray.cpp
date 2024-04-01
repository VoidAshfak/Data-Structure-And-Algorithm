#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){

    for (int l = 0; l < (v.size()); l++)
    {
        cout << v[l] << " ";
    }
    cout << endl;
}

// void MergeArray(vector<int> ){

// }


int main(){
    
    vector<int> nums1, nums2,nums3;
    int i = 0, j = 0, k = 0;

    //MergeArray(nums1,nums2);
    
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    
    // print(nums1);
    // print(nums2); 

    while (i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] < nums2[j]){
            
        }
    }
    


    return 0;
}
