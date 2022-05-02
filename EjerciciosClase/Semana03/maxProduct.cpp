#include<iostream>
#include<vector>
#include<algorithm>
int MaxProduct(const std :: vector<int>&numbers)
{

}

int main(){
    // Lectura de datos
    int n;
    std :: cin >>n;
    std :: vector<int>numbers(n);
    for(int i=0;i<n;++i){
        std :: cin >> numbers[i];
   }
    // Salida de datos 
    std :: cout << MaxProduct(numbers)<<"\n";

    return 0;
}
