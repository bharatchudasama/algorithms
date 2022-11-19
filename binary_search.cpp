#include <iostream>
// program containing binary search
//time complexity = O(log n) ( upper bond)
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        //there may be a case where satrt = 2**31 - 1 or end = 2**31 - 1 hence after adding start and end we will be out of int range hence we will use given below code 
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        // to get right vala path
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        // to get left vala path
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[5] = {2, 4, 6, 8, 10};
    int odd[6] = {1, 5, 7, 9, 11, 13};
    int a = binarySearch(even, 5, 6);
    int b = binarySearch(odd, 6, 14);
    cout << "index of 14 " << b <<endl;
    cout << "index of 6 " << a;

    return 0;
}