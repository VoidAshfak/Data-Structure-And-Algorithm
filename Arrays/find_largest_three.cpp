#include<bits/stdc++.h>
using namespace std;

// void update_largest(int (&largestThree)[3], int num) {

// }

// O(n) time | O(1) space
void find_largest_three(vector<int> &arr, int (&largestThree)[3]) {
    for(auto num: arr) {
        if(num > largestThree[2]){
            largestThree[0] = largestThree[1];
            largestThree[1] = largestThree[2];
            largestThree[2] = num;
        } else if(num > largestThree[1]) {
            largestThree[0] = largestThree[1];
            largestThree[1] = num;
        } else if(num > largestThree[0]) {
            largestThree[0] = num;
        }
    }
}

int main() {
    vector<int> arr = {141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7, 542};
    int largestThree[3] = {INT_MIN, INT_MIN, INT_MIN};

    find_largest_three(arr, largestThree);

    for(int i = 0; i < 3; i++) {
        cout << largestThree[i] << ", ";
    }
    cout << endl;

    return 0;
}