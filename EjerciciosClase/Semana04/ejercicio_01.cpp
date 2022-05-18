/*      Propósito del código
*   Este programa busca el mayor numero de un array haciendo uso de una función
*   que recibe un array y un tamaño.
*   esta comprobando el cada elemento del array con todo el array para encontrar
*   el mayor numero y almacenando el mayor en una variable.
*   No obstante si el fin es solo encontrar el mayor numero, no es necesario
*   comprobar cada elemento del array con todo el array.
*   
*       Complexidad:
*   O(n^2)
*/
#include <iostream>
using namespace std;

// Función mas eficiente para encontrar el mayor numero de un array
// Complexidad: O(n)
int greatestNumber(int array[], int size)
{
    int greatest = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > greatest)
        {
            greatest = array[i];
        }
    }
    return greatest;
}

int greatestNumber2(int array[], int size)
{
    int greatest = array[0];    // Inicializamos el valor del mayor
    for (int i = 1; i < size; i++)
    {
        bool isvaltheGreatest = true;
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                isvaltheGreatest = false;
            }
        }
        if (isvaltheGreatest)
        {
            greatest = array[i];
        }
    }
    return greatest;
}


int main()
{
    int array[] = {1234, 2, 3, -34, 4, 5, 23, 762};
    int size = sizeof(array) / sizeof(array[0]);

    int greatest = greatestNumber2(array, size);
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}
