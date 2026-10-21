/*        
 Maior Data Entre Duas Datas
Faça um programa que determine a data cronologicamente maior entre duas
datas fornecidas pelo usuário. Cada data deve ser composta por três valores
inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.

*/

#include <iostream>

using namespace std;

void datas(){

    int dia1 = 0, dia2 = 0, mes1 = 0, mes2 = 0, ano1 = 0, ano2 = 0; // variaveis para guardar as datas

    cout << "\n========== Comparação de datas ===========" <<endl;
    cout << "\nA MAIOR DATA" <<endl;
    cout << "\nDigite uma data qualquer:"<< endl;
    cout << "\nDia: ";
    cin >> dia1;
    cout << "\nMês: ";
    cin >> mes1;
    cout << "\nAno: ";
    cin >> ano1;

    cout << "\nDigite outradata qualquer:"<<endl;
    cout << "\nDia: ";
    cin >> dia2;
    cout << "\nMês: ";
    cin >> mes2;
    cout << "\nAno: ";
    cin >> ano2;

    if(dia1 > dia2 || mes1 > mes2 || ano1 > ano2){
        cout << "\nA data " << dia1 << "/" << mes1 << "/" << ano1 << " é cronológicamente maior que a data " << dia2 << "/" << mes2 << "/" << ano2 << endl;
    } else {
         cout << "\nA data " << dia2 << "/" << mes2 << "/" << ano2 << " é cronológicamente maior que a data " << dia1 << "/" << mes1 << "/" << ano1 << endl;
    }

}

int main(){

    datas();

    return 0;
}