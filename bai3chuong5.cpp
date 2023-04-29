#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

void inputAndCheck(int arr[], int &size, int &minEven)
{
    minEven = 999999;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; 
        if (isEven(arr[i]) == true && arr[i] < minEven) 
        {
            minEven = arr[i];
        }
    }   
}

int findMinOdd(int arr[], int size, int minEven)
{
    int minOdd = 999999;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] > minEven && arr[i] < minOdd) 
        {
            minOdd = arr[i];
        }
    }
    return minOdd;
}

int main()
{
    int arr[101];
    int size;
    cin >> size;
    int minEven;
    inputAndCheck(arr, size, minEven);
    int minOdd = findMinOdd(arr, size, minEven);
    if (minOdd != 999999) {
        cout << minOdd;
    } else {
        cout << -1;
    }
    return 0;
}
//by #NhatAnh0236
