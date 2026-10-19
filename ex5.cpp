#include <iostream>

using namespace std;

void ordem(){ // função para ordenar os números 

    // variaveis para armazenar os números 
    int n1, n2, n3, n4;

    // solicitando os números ao usuário

    cout << "\nDigite um número qualquer: "; // primeiro número
    cin >> n1;

    cout << "\nDigite outro número qualquer: "; // segundo número
    cin >> n2;

    cout  << "\nDigite outro número qualquer: "; // terceiro número 
    cin >> n3;

    cout << "\nDigite outro número qualquer: "; // quarto número
    cin >> n4;

    // estrutura da ordem crescente de 3 números e o quarto número em qualquer posição

    cout << "\n Ordem crescente dos 3 primeiros números e o 4° número em posição aleatória: " << endl;

    if(n1 < n2 && n2 < n3){
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

    } else if ( n1 < n3 && n3 < n2){
        cout << n1 << " " << n3 << " " << n2 << " " << n4 << endl;

    }else if (n2 < n1 && n1 < n3){
        cout << n2 << " " << n1 << " " << n3 << " " << n4 << endl;

    }else if (n2 < n3 && n3 < n1){
        cout << n2 << " " << n3 << " " << n1 << " " << n4 << endl;

    } else if(n3 < n1 && n1 < n2){
        cout << n3 << " " << n1 << " " << n2 << " " << n4 << endl;

    }else if(n3 < n2 && n2 < n1){
        cout << n3 << " " << n2 << " " << n1 << " " << n4 << endl;

    }

    // estrutura da ordem decrescente dos números

    cout << "\n Ordem decrescente dos 4 números: " <<endl;

    if(n1 > n2 && n2 > n3 && n3 > n4){
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl; // posição 1, 2, 3, 4
    } else if(n1 > n2 && n2 > n4 && n4 > n3){
        cout << n1 << " " << n2 << " " << n4 << " " << n3 << endl; // posição 1, 2, 4, 3

    }else if(n1 > n3 && n3 > n2 && n2 > n4){
        cout << n1 << " " << n3 << " " << n2 << " " << n4 << endl; // posição 1, 3, 2, 4
    
    }else if(n1 > n3 && n3 > n4 && n4 > n2){
        cout << n1 << " " << n3 << " " << n4 << " " << n2 << endl;// posição 1, 3, 4, 2

    }else if(n1 > n4 && n4 > n2 && n2 > n3){
        cout << n1 << " " << n4 << " " << n2 << " " << n3 << endl; // posição 1, 4, 2, 3

    }else if(n1 > n4 && n4 > n3 && n3 > n2){
        cout << n1 << " " << n4 << " " << n3 << " " << n2 << endl; // posição 1, 4, 3, 2

    }else if(n2 > n1 && n1 > n3 && n3 > n4){
        cout << n2 << " " << n1 << " " << n3 << " " << n4 << endl; // posição 2, 1, 3, 4

    }else if(n2 > n1 && n1 > n4 && n4 > n3){
        cout << n2 << " " << n1 << " " << n4 << " " << n3 << endl; // posição 2, 1, 4, 3

    }else if(n2 > n3 && n3 > n1 && n1 > n4){
        cout << n2 << " " << n3 << " " << n1 << " " << n4 << endl; // posição 2, 3, 1, 4
    
    }else if(n2 > n3 && n3 > n4 && n4 > n1){
        cout << n2 << " " << n3 << " " << n4 << " " << n1 << endl; // posição 2, 3, 4, 1

    }else if(n2 > n4 && n4 > n1 && n1 > n3){
        cout << n2 << " " << n4 << " " << n1 << " " << n3 << endl; // posição 2, 4, 1, 3

    }else if(n2 > n4 && n4 > n3 && n3 > n1){
        cout << n2 << " " << n4 << " " << n3 << " " << n1 << endl; // posição 2, 4, 3, 1

    }else if(n3 > n1 && n1 > n2 && n2 > n4){
        cout << n3 << " " << n1 << " " << n2 << " " << n4 << endl; // posição 3, 1, 2, 4

    }else if(n3 > n1 && n1 > n4 && n4 > n2){
        cout << n3 << " " << n1 << " " << n4 << " " << n2 << endl; // posição 3, 1, 4, 2

    }else if(n3 > n2 && n2 > n1 && n1 > n4){
        cout << n3 << " " << n2 << " " << n1 << " " << n4 << endl; // posição 3, 2, 1, 4

    }else if(n3 > n2 && n2 > n4 && n4 > n1){
        cout << n3 << " " << n2 << " " << n4 << " " << n1 << endl; // posição 3, 2, 4, 1

    }else if(n3 > n4 && n4 > n1 && n1 > n2){
        cout << n3 << " " << n4 << " " << n1 << " " << n2 << endl; // posição 3, 4, 1, 2

    }else if(n3 > n4 && n4 > n2 && n2 > n1){
        cout << n3 << " " << n4 << " " << n2 << " " << n1 << endl; // posição 3, 4, 2, 1

    }else if(n4 > n1 && n1 > n2 && n2 > n3){
        cout << n4 << " " << n1 << " " << n2 << " " << n3 << endl; // posição 4, 1, 2, 3

    } else if(n4 > n1 && n1 > n3 && n3 > n2){
        cout << n4 << " " << n1 << " " << n3 << " " << n2 << endl; // posição 4, 1, 3, 2

    }else if(n4 > n2 && n2 > n1 && n1 > n3){
        cout << n4 << " " << n2 << " " << n1 << " " << n3 << endl; // posição 4, 2, 1, 3

    } else if(n4 > n2 && n2 > n3 && n3 > n1){
        cout << n4 << " " << n2 << " " << n3 << " " << n1 << endl; // posição 4, 2, 3, 1

    } else if(n4 > n3 && n3 > n1 && n1 > n2){
        cout << n4 << " " << n3 << " " << n1 << " " << n2 << endl; // posição 4, 3, 1, 2

    }else if(n4 > n3 && n3 > n2 && n2 > n1){
        cout << n4 << " " << n3 << " " << n2 << " " << n1 << endl; // posição 4, 3, 2, 1

    }

}

int main(){

    ordem();

    return 0;
}