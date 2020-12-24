#include "Calculadora.h"
Calculadora::Calculadora(){

}
Calculadora::~Calculadora(){
   // Limpa();
}
char Calculadora:: GetOperacao(){
    return Operacao;
}
int Calculadora::GetNumero1(){
    return Numero1;
}
int Calculadora::GetNumero2(){
    return Numero2;
}
void Calculadora::SetOperacao(char operacao){
    Operacao = operacao;
}
void Calculadora::SetNumero1(int numero1){
    Numero1 = numero1;
}
void Calculadora::SetNumero2(int numero2){
    Numero2 = numero2;
}
int Calculadora::Soma(int numero1, int numero2){
    return numero1 + numero2;
}
int Calculadora::Subtracao(int numero1, int numero2){
    return numero1 - numero2;
}
int Calculadora::Divisao(int numero1, int numero2){
    return numero1 / numero2;
}
int Calculadora::Multiplicacao(int numero1, int numero2){
    return numero1 * numero2;
}
int Calculadora::Resto(int numero1, int numero2){
    return numero1 % numero2;
}
int Calculadora::Resultado(int numero1, int numero2, char operacao){
    int resultado{};
    Calculadora c;
    switch(operacao){
        case '+': 
            resultado = c.Soma(numero1, numero2);
            break;
        case '-':
            resultado = c.Subtracao(numero1, numero2);
            break;
        case '*':
            resultado = c.Multiplicacao(numero1, numero2);
            break;
        case '/':
            resultado = c.Divisao(numero1, numero2);
            break;
        case '%':
            resultado = c.Resto(numero1, numero2);
            break;
        default:
            std::cout<<"ERRO, DIGITE UM COMANDO VÁLIDO\n";
    }
    return resultado;
}
std::vector<std::string> Calculadora::Historico(int numero1, int numero2, char operacao){
    std::vector<std::string> historico;
    std::string op = std::to_string(numero1) + " " + operacao + " " + std::to_string(numero2) + " = "+ std::to_string(Resultado(numero1,numero2,operacao));
    //std::cout<<op;
    historico.push_back(op);
    return historico;
}
/*void Calculadora::Limpa(){
    Calculadora c;

   c.Historico.clear(); 
}*/
