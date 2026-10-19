#include <iostream>
using namespace std;

struct notasAluno{ // Registrador das notas

    float n1 = 0.0; // nota 1
    float n2 = 0.0; // nota 2
    float n3 = 0.0; // nota 3
    float media = 0.0; // variavel para armazenar a media do aluno

};

void statusAluno(){

    notasAluno nota; // Registrador das notas

    // Solicitação das notas do aluno
    cout << "======= Sistema de Notas ========" <<endl;
    cout <<"\nInsira a primeira nota: "; // solicitando a primeira nota
    cin >> nota.n1;

    cout << "\nInsira a segunda nota: "; // solicitando a segunda nota 
    cin >> nota.n2;

    cout << "\nInsira a terceira nota: "; // solicitando a terceira nota
    cin >> nota.n3;

    nota.media = (nota.n1 + nota.n2 + nota.n3) / 3; // calculo da média

    // verificando a média do aluno
    if(nota.media < 3.0){

        cout << "\n===== Notas do Aluno ====" << endl;
        cout << "\nNota 1: "<< nota.n1 <<endl;
        cout << "Nota 2: "<< nota.n2 <<endl;
        cout << "Nota 3: "<< nota.n3 <<endl;
        cout << "\nMédia do aluno ========" <<endl;
        cout << "\nMédia: "<< nota.media <<endl;
        cout << "REPROVADO!";

    } else if( nota.media < 7.0){

        cout << "\n===== Notas do Aluno ====" << endl;
        cout << "\nNota 1: "<< nota.n1 <<endl;
        cout << "Nota 2: "<< nota.n2 <<endl;
        cout << "Nota 3: "<< nota.n3 <<endl;
        cout << "\nMédia do aluno ========" <<endl;
        cout << "\nMédia: "<< nota.media <<endl;
        cout << "EXAME!" <<endl;

        float nota_Exame = 0.0;
        nota_Exame = 7.0 - nota.media;

        cout << "\nNota necessária para atingir a média: "<< nota_Exame;

    } else if(nota.media <= 10.0){

        cout << "\n===== Notas do Aluno ====" << endl;
        cout << "\nNota 1: "<< nota.n1 <<endl;
        cout << "Nota 2: "<< nota.n2 <<endl;
        cout << "Nota 3: "<< nota.n3 <<endl;
        cout << "\nMédia do aluno ========" <<endl;
        cout << "\nMédia: "<< nota.media <<endl;
        cout << "APROVADO!" <<endl;

    }

}

int main(){

    statusAluno();

    return 0;
}