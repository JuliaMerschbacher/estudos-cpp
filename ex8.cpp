/*8. Menu de Operações
Faça um programa que mostre o menu de opções a seguir, receba a opção do
usuário e os dados necessários para executar cada operação.
Menu de opções: 1. Somar dois números 2. Raiz quadrada de um número
Digite a opção desejada: */

#include <iostream>
#include <cmath>

using namespace std;

void menuOp(){

    int op; // variável para o usuário escolher uma opção do menu

    do{

        // menu e opções
        cout << "\n========================================" << endl;
        cout << "\nMENU DE OPERAÇÕES MATEMÁTICAS"<<endl;
        cout << "1. Somar 2 números" <<endl;
        cout << "2. Raiz quadrada de um número "<<endl;
        cout << "3. Sair"<<endl;
        cout << "\n========================================" << endl;
        cout << "\nEscolha uma opção: ";
        cin >> op;

        switch(op){
            case 1 : // opção 1 - somar 2 números

            int n1, n2, n; // variaveis para receber os valores da soma e o resultado

            cout << "\n===================================================="<<endl;
            cout << "\nSOMA DE 2 NÚMEROS"<<endl;
            cout << "\n Digite o primeiro número que deseja somar: ";
            cin >> n1;
            cout << "\n Digite o segundo número que deseja somar: ";
            cin >> n2;

            // soma dos números
            n = n1 + n2;

            cout << "\nResultado da soma: " << n <<endl;
            cout << "===================================================="<<endl;

            break;

            case 2: // opção 2 - raiz quadrada de 1 número

            float r, num; // variaveis que recebe o número e o resultado da raiz quadrada

            cout << "\n=========================================================" <<endl;
            cout << "\nRAIZ QUADRADA DE UM NÚMERO" <<endl;
            cout << "\nDigite o número que deseja calcular a raiz quadrada: ";
            cin >> num;

            // calculo da raiz quadrada
            r = sqrt(num);

            cout << "\nResultado da raiz quadrada: " << r <<endl;
            cout << "=========================================================" <<endl;

            break;

            case 3:

            cout << "\nSaindo..." <<endl;

        }
    } while(op != 3);

}

int main(){

    menuOp();

    return 0;
}