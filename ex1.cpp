#include <iostream>
using namespace std;

// Registrador para pedir a nota e armazenar-las

struct notaAluno{

    float tl = 0.0; // nota trabalho de laboratório
    float as = 0.0; // nota avaliação semestral
    float ef = 0.0; // nota exame final

};

int main(){

    notaAluno nota;
    int media; //  variavél para armazenar a media do aluno

    cout << "==== Sistema de calculo de notas ====" << endl;
    cout << "\nInsira a nota do trabalho de laboratório: ";
    cin >> nota.tl;

    cout << "\nInsira a nota da avaliação semestral: ";
    cin >> nota.as;

    cout << "\nInsira a nota do exame final: ";
    cin >> nota.ef;

    // Cálculo da média ponderada

    media = ((nota.tl*2)+ (nota.as*3)+ (nota.ef*5)) / 10;

    if(media < 5.0){

        cout << "Nota tabalho de laboratório: " << nota.tl <<endl;
        cout << "Nota avaliação semestral: " << nota.as <<endl;
        cout << "Nota exame final: " << nota.ef <<endl;
        cout << "Média do aluno: " << media <<endl;
        cout << "Conceito E";
    } else if(media < 6.0){

        cout << "Nota tabalho de laboratório: " << nota.tl <<endl;
        cout << "Nota avaliação semestral: " << nota.as <<endl;
        cout << "Nota exame final: " << nota.ef <<endl;
        cout << "Média do aluno: " << media <<endl;
        cout << "Conceito D";

    } else if( media < 7.0 ){

        cout << "Nota tabalho de laboratório: " << nota.tl <<endl;
        cout << "Nota avaliação semestral: " << nota.as <<endl;
        cout << "Nota exame final: " << nota.ef <<endl;
        cout << "Média do aluno: " << media <<endl;
        cout << "Conceito C";

    } else if(media < 8.0){

        cout << "Nota tabalho de laboratório: " << nota.tl <<endl;
        cout << "Nota avaliação semestral: " << nota.as <<endl;
        cout << "Nota exame final: " << nota.ef <<endl;
        cout << "Média do aluno: " << media <<endl;
        cout << "Conceito B";

    } else if(media <= 10.0){
        cout << "Nota tabalho de laboratório: " << nota.tl <<endl;
        cout << "Nota avaliação semestral: " << nota.as <<endl;
        cout << "Nota exame final: " << nota.ef <<endl;
        cout << "Média do aluno: " << media <<endl;
        cout << "Conceito A";
    }


    return 0;

}