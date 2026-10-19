#include <iostream>

using namespace std;

void ordemCrescente(){
     
    int num1, num2, num3;

    cout << "\nDigite um número qualquer: ";
    cin >> num1;

    cout << "\nDigite outro número qualquer: ";
    cin >> num2;

    cout << "\nDigite outro número qualquer: ";
    cin >> num3;

    if(num1 < num2 && num2 < num3){

        cout << "\n "<<num1 << " " << num2 << " " << num3 <<endl;

    } else if(num1 < num3 && num3 < num2){

        cout << "\n" << num1 << " " << num3 << " " << num2 << endl;

    }else if(num2 < num1 && num1 < num3){

        cout << "\n"<< num2 << " " << num1 << " " << num3 << endl;

    } else if(num2 < num3 && num3 < num1){

        cout << "\n"<< num2 << " " << num3 << " " << num1 << endl;

    } else if(num3 < num1 && num1 < num2){

        cout << "\n"<< num3 << " " << num1 << " " << num2 << endl;

    }else if(num3 < num2 && num2 < num1){

        cout << "\n"<< num3 << " " << num2 << " " << num1 << endl;

    }

}

int main(){

    ordemCrescente();

    return 0;
}