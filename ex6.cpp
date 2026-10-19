#include <iostream>

using namespace std;

void impar_Par(){

    // variavel para armazenar o número 
    int num;

    cout << "\nDigite um número qualquer: ";
    cin >> num;

    if(num % 2 == 0){

         cout << "\nO número " << num << " é par! ";
    } else {

         cout << "\nO número " << num << " é impar!";
    }
}

int main(){

    impar_Par();

    return 0;
}