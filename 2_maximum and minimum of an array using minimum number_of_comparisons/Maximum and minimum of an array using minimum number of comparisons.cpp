#include <bits/stdc++.h>
#include<iostream>
using namespace std;


//creating an object for output
struct Pair
{
    int Min;
    int Max;
};

Pair get_min_max(int arr[], int n)
{
    struct Pair min_max;

    //if there is only one element array

    if(n == 1)
    {
        min_max.Min = arr[0];
        min_max.Max = arr[0];
        return min_max;
    }
    //if there is more than one element in the array
    else
    {
        //setting max and min value initially. It'll update later
        min_max.Min = arr[0];
        min_max.Max = arr[1];
    }
    for(int i=2; i<6; i++)
    {
        if(arr[i] < min_max.Min)
            min_max.Min = arr[i];
        if(arr[i] > min_max.Max)
            min_max.Max = arr[i];
    }
    return min_max;

}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;
    struct Pair min_max;
    min_max = get_min_max(arr,arr_size);

    //printing the output
    cout<< "Minimum Value:" << min_max.Min <<endl;
    cout<< "Maximum Value:" << min_max.Max <<endl;

    return 0;
}
