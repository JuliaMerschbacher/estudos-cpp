/*Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é
inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo
à tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2
ou 3, e que os números digitados sejam diferentes um do outro.

---------------------------------------------------------------------------------------
Valor de I                     Forma a escrever
---------------------------------------------------------------------------------------
    1                               A, B, C em ordem crescente
    2                               A, B, C em ordem decrescente
    3                               O maior número fica entre os outros dois números
---------------------------------------------------------------------------------------

*/

#include <iostream>

using namespace std;

void controleNum(){

    // variáveis para guardar as informações
    int I;
    float A, B, C;

    cout << "\nDigite um valor entre 1 e 3: ";
    cin >> I;

    cout << "\n Digite um número real qualquer: ";
    cin >> A;

    cout << "\n Digite outro número real qualquer: ";
    cin >> B;

    cout << "\n Digite outro número real qualquer: ";
    cin >> C;

    if(I == 1){ // 1. A, B, C em ordem crescente
        if(A < B && B < C){
            cout << "\nOrdem crescente dos números" <<endl; 
            cout << A << " " << B << " " << C << endl; // posição de cada termo A, B, C

        } else if ( A < C && C < B){
            cout << "\nOrdem crescente dos números" <<endl;
            cout << A << " " << C << " " << B << endl; // posição de cada A, C, B

        }else if(B < A && A < C){
            cout << "\nOrdem crescente dos números" <<endl;
            cout << B << " " << A << " " << C << endl; // posição de cada B, A, C

        } else if(B < C && C < A){
            cout << "\nOrdem crescente dos números" <<endl;
            cout << B << " " << C << " " << A << endl; // posição de cada B, C, A

        } else if(C < A && A < B){
            cout << "\nOrdem crescente dos números" <<endl;
            cout << C << " " << A << " " << B << endl; // posição de cada C, A, B

        } else if(C < B && B < A){
            cout << "\nOrdem crescente dos números" <<endl;
            cout << C << " " << B << " " << A << endl; // posição de cada C, B, A

        }
    } else if( I == 2){ // 2. A, B, C em ordem decrescente

         if(A > B && B > C){
            cout << "\nOrdem decrescente dos números" <<endl; 
            cout << A << " " << B << " " << C << endl; // posição de cada termo A, B, C

        } else if ( A > C && C > B){
            cout << "\nOrdem decrescente dos números" <<endl;
            cout << A << " " << C << " " << B << endl; // posição de cada A, C, B

        }else if(B > A && A > C){
            cout << "\nOrdem decrescente dos números" <<endl;
            cout << B << " " << A << " " << C << endl; // posição de cada B, A, C

        } else if(B > C && C > A){
            cout << "\nOrdem decrescente dos números" <<endl;
            cout << B << " " << C << " " << A << endl; // posição de cada B, C, A

        } else if(C > A && A > B){
            cout << "\nOrdem decrescente dos números" <<endl;
            cout << C << " " << A << " " << B << endl; // posição de cada C, A, B

        } else if(C > B && B > A){
            cout << "\nOrdem decrescente dos números" <<endl;
            cout << C << " " << B << " " << A << endl; // posição de cada C, B, A

        }
        
    } else if(I == 3){ // 3. O maior número fica entre os outros dois números

        if( A > B && A > C){
            cout << "\nMaior número" <<endl;
            cout << B << " " << A << " " << C <<endl;

        } else if( B > A && B > C){
            cout << "\nMaior número" <<endl;
            cout << A << " " << B << " " << C << endl;

        } else if(C > A && C > B){
            cout << "\nMaior número" <<endl;
            cout << A << " " << C << " " << B <<endl;
        }

    }

}

int main(){

    controleNum();

    return 0;
}