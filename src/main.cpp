#include <bits/stdc++.h>
#include "Calculadora.h"
using namespace std;
void display_menu();
void nova_operacao(Calculadora &c, int a, int b, int &resultado, char op);
void mesmo_numero(Calculadora &c, int a, int &resultado, char op);
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
   // while(cin>>op){
    bool done = true;
    do{
        cout << "Deseja fazer outra operação com o resultado? S/N? ";
        cin >> op;
        switch(op){
            case 'S':
            case 's':
                mesmo_numero(c, a, resultado, op);
                break;
            case 'N':
            case 'n':
                nova_operacao(c, a, b, resultado, op);
                break;
            default:
                cout << "Opção inválida, digite uma opção válida." << endl;
        }
        if (!(cin >> op))
        {
            done = false;
        }
        else{
            continue;
        }
        /*
        if (toupper(op) == 'S'){
           // display_menu();
            cout << "Digite a operação seguida do outro número: ";
            cin >> op;
            cin >> a;
            if (!(cin >> op)){
                break;
            }
            c.Imprime(resultado, a, op);
            int aux = resultado;
            resultado = c.Resultado(aux, a, op);
            continue;
        }
        else if(toupper(op) == 'N'){
            //display_menu();
            cout << "Digite a operação desejada: ";
            cin>>a;
            cin>>op;
            cin>>b;
            if(!(cin>>op)){
                break;
            }
            c.Imprime(a, b, op);
            resultado = c.Resultado(a, b, op);
        } else if (!(cin>>op)){
            done = false;
        }
        else /*if(toupper(op)!='S'||'N')*//*{
            cout<< "Opção inválida, digite uma opção válida."<< endl;
        }*/
        } while (done);
    
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
void nova_operacao(Calculadora& c, int a, int b, int& resultado, char op){
    cout << "Digite a operação desejada: ";
    cin >> a;
    cin >> op;
    cin >> b;
    c.Imprime(a, b, op);
    resultado = c.Resultado(a, b, op);
}
void mesmo_numero(Calculadora &c, int a, int &resultado, char op)
{
    cout << "Digite a operação seguida do outro número: ";
    cin >> op;
    cin >> a;
    c.Imprime(resultado, a, op);
    int aux = resultado;
    resultado = c.Resultado(aux, a, op);
}