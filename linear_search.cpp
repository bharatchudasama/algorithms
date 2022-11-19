#include <iostream>
// programm for linear serach
// time complexity O(n)
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int even[5] = {2, 4, 6, 8, 10};
    int odd[6] = {1, 5, 7, 9, 11, 13};
    int a = linearSearch(even, 5, 6);
    int b = linearSearch(odd, 6, 13);
    cout << "index of 13 " << b << endl;
    cout << "index of 6 " << a;

    return 0;
}