#include <iostream>
using namespace std;

void maiorNum(){

    int num1;
    int num2;

    cout << "\nInsira um número qualquer: ";
    cin >> num1;

    cout << "\n Insira outro número qualquer: ";
    cin >> num2;

    if(num1 > num2){

        cout << "O primeiro númro digitado, " << num1 << ", é o maior número!" << endl;
    } else if(num2 > num1){

        cout << "O segundo número digitado, " << num2 << ", é o maior número!" << endl;
    }
}

int main(){

    maiorNum();

    return 0;
}