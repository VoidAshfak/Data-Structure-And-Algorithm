#include<bits/stdc++.h>
using namespace std;

int calculate_speed(vector<int> &str1, vector<int> &str2, bool isMax) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int n = str1.size();
    int speed = 0;
    if(isMax) {
        for(int i = 0; i < n; i++) {
            speed += max(str1[i], str2[n-1-i]);
        }
    } else {
        for(int i = 0; i < n; i++) {
            speed += max(str1[i], str2[i]);
        }
    }

    return speed;
}

int main()
{
    vector<int> redShirt = {5,5,3,9,2};
    vector<int> blueShirt = {3,6,7,2,1};
    bool fastest = false;

    cout << calculate_speed(redShirt, blueShirt, fastest) << endl;

    return 0;
}

/*

2 3 5 5 9
1 2 3 6 7

(2,7), (3,6), (5,3), (5,2), (9,1)
*/