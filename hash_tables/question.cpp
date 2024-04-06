// [1,3,5]
// [2,4,5]
// is there any common value?
// brute force method solution -> O(n^2)
// Hashing solution -> O(2n)


#include<bits/stdc++.h>
using namespace std;


bool isAnyCommon(vector<int> vector1, vector<int> vector2) {
    unordered_map<int, bool> myMap;
    for(auto item : vector1){
        myMap.insert({item, true});
    }

    for(auto item: vector2) {
        if(myMap[item]) return true;
    }

    return false;
}

int main()
{
    vector<int> vect1 {1,3,6};
    vector<int> vect2 {2,4,5};

    cout << isAnyCommon(vect1, vect2);
}