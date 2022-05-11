#include <iostream>
using namespace std;

enum class order {q1, q2, q3, q4, q5, q6, q7, q8};   
order every_other(int array[], int size)
{
    order q1 = order::q1;
    if (array[0] > array[1])
    {
        q1 = order::q2;
    }
    else
    {
        q1 = order::q1;
    }
    for (int i = 2; i < size; i += 2)
    {
        if (array[i] > array[i + 1])
        {
            q1 = order::q3;
        }
        else
        {
            q1 = order::q4;
        }
    }
    return q1;
}  

int main()
{
    int array[] = {1, 2, 3, -34, 4, 5, 23, 762};
    int size = sizeof(array) / sizeof(array[0]);

    every_other(array, size);
    return 0;
}
