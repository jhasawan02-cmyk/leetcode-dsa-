#include <iostream>
#include <algorithm>
#include<vector>

// trying binary search

int BSearch(int arr[], int size, int target)
{
    int S = 0;
    int E = size - 1;

    while (S <= E)
    {
        int middleIndex = S + (E - S) / 2; // middle index
        if (arr[middleIndex] < target)
        {
            S = middleIndex + 1;
        }

        else if (arr[middleIndex] > target)
        {
            E = middleIndex - 1;
        }

        else
        {
            return middleIndex;
        }
        
    }
    return -1;
}

int main()
{


    int arr[] = {-18, -6, -2, 0, 9, 25, 37, 41, 84, 97, 105}; // sorted array in
    int target = 105;
    int size = 11;

    std::cout << BSearch(arr, size, target) << " ";

    return 0;
}