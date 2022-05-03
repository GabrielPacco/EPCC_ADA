#include <iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    int j, key, i;
    for (j = 1; j < n; j++)
    {
        key = A[j];
        i = j - 1;

        // Diferencia: A[i] > key cambia a A[i] < key
        while (i >= 0 && A[i] < key)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
    }
}

int main()
{
    int A[] = { 12, 11, 13, 5, 6, 1, 7, 8, 9, 10 };
    int n = sizeof(A) / sizeof(A[0]);

    insertionSort(A, n);
    for (int j = 0; j < n; j++)
        cout << A[j] << " ";
    cout << endl;

    return 0;
}
