#include <bits/stdc++.h>
#include "Calculadora.h"
using namespace std;
void display_menu();
int main(){

    Calculadora c {};
    char op{};
    int resultado{};
    display_menu();
    cout << "Digite a operação desejada: ";
    int a{}, b{};
    cin >> a;
    cin >> op;
    cin >> b;
    c.Imprime(a, b, op);
    resultado = c.Resultado(a, b, op);

    do{
        cout << "Deseja fazer outra operação com o resultado? S/N? ";
        //cin >> op;
        if (toupper(op) == 'S'){
            display_menu();
            cout << "Digite a operação seguida do outro número: ";
            cin >> op;
            cin >> a;
            c.Imprime(resultado, a, op);
            int aux = resultado;
            resultado = c.Resultado(aux, a, op);
        }
        else{
            display_menu();
            cout << "Digite a operação desejada: ";
        }

    } while (cin >> op);
    
        return 0;
}
void display_menu(){
    cout << "_____________________________________________________________\n" << endl;
    cout << "----------------- CALCULADORA PARA INTEIROS -----------------" << endl; 
    cout << "_____________________________________________________________" << endl;
    cout << "      ATENÇÃO!!! Apenas operações com números inteiros.      " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "---------------------- SOMA -> Digite + ---------------------" << endl;
    cout << "-------------------- SUBTRAÇÃO-> Digite - -------------------" << endl;
    cout << "------------------ MULTIPLICAÇÃO -> Digite * ----------------" << endl;
    cout << "--------------------- DIVISÃO -> Digite / -------------------" << endl;
    cout << "---------------------- RESTO -> Digite % --------------------" << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "     Para utilizar a calculadora digite os dois números      " << endl;
    cout << "   com o sinal da operação no meio deles, por exemplo 2 + 5  " << endl;
    cout << "_____________________________________________________________" << endl;
    cout << "   Para sair da calculadora, pressione as teclas Ctrl + D    " << endl;
    cout << "_____________________________________________________________\n" << endl;
    cout << " ************ Obrigada por utilizar a calculadora ***********" << endl;
    cout << "_____________________________________________________________\n" << endl;
  //  cout << "Digite a operação desejada: ";
}