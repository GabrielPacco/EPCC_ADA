#include <iostream>
#include <vector>


int MaxProduct(std::vector <int>& numbers)
{
    int n = numbers.size(), max_num, sec_max_num;
    max_num = 0;

    for (int i = 1; i < n; i++)
        if (numbers[i] > numbers[max_num])
            max_num = i;

    if (max_num == 0) {
        sec_max_num = 1;
    }
    else {
        sec_max_num = 0;
    }

    for (int i = 1; i < n; i++)
        if (numbers[i] > numbers[sec_max_num] && i != max_num)
            sec_max_num = i;

    return numbers[max_num] * numbers[sec_max_num];
}

int main() {

    // Lectura de datos
    int n;
    std::cout << "Introduce el numero de elementos del vector: ";
    std::cin >> n;
    std::vector <int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Introduce el elemento " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    // Salida de datos 
    std::cout << "El maximo producto de dos elementos del vector es: " << MaxProduct(numbers) << std::endl;

    return 0;
}