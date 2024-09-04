// [3, 2, 1, 2, 6]
// [1, 2, 2, 3, 6]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> time = {3, 2, 1, 2, 6};

    sort(time.begin(), time.end());

    int totalWaitingTime = 0;

    for(int i = 0; i < time.size(); i++) {
        int remain = time.size()-1-i;
        totalWaitingTime += (remain*time[i]);
    }
    cout << totalWaitingTime << endl;
}