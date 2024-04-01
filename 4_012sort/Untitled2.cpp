#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,1,2,0,2,1,0,2};

    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    //counting 0's, 1's and 2's
    for(int i=0;i<8;i++)
    {
        if(arr[i]== 0)
            count_0++;
        if(arr[i]== 1)
            count_1++;
        if(arr[i]== 2)
            count_2++;
    }
    for(int i=0;i<8;i++)
    {
        if(i<count_0)
            arr[i] = 0;
        if(i>=count_0 && i<count_0+count_1)
            arr[i] = 1;
        if(i>=count_0+count_1)
            arr[i] = 2;
    }

    for(int i=0;i<8;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}
