#include <iostream>
using namespace std;

bool twoSum(int array[], int size , int sum)
{
    bool isFound = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] + array[j] == sum)
            {
                isFound = true;
            }
        }
    }
    return isFound;
}

int main()
{
    int array[] = {1, 2, 3, -34, 4, 5, 23, 762};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = -30;

    bool isFound = twoSum(array, size, sum);
    cout << "The sum is: " << sum << endl;
    if (isFound)
    {
        cout << "The sum is found" << endl;
    }
    else
    {
        cout << "The sum is not found" << endl;
    }

    return 0;
}

