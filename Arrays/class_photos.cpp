#include<bits/stdc++.h>
using namespace std;

bool class_photos(vector<int> &red, vector<int> &blue) {
    sort(red.begin(),red.end());
    sort(blue.begin(),blue.end());

    int n = red.size();
    bool isFrontRed = red[n-1] < blue[n-1];

    for(int i = n-1; i >= 0; i--) {
        if(isFrontRed) {
            if(red[i] > blue[i]) return false;
        } else {
            if(red[i] < blue[i]) return false;
        }
    }
    return true;
}

int main()
{
    vector<int> red = {5, 8, 1, 3, 4};
    vector<int> blue = {6, 9, 2, 4, 5};

    string result = class_photos(red, blue) == true ? "True" : "False";
    cout << result << endl;

    return 0;
}