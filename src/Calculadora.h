#include <bits/stdc++.h>
#ifndef CALCULADORA_H
#define CALCULADORA_H
class Calculadora{
public:
   Calculadora();
   ~Calculadora();
   char GetOperacao();
   void SetOperacao(char operacao);
   int GetNumero1();
   void SetNumero1(int numero1);
   int GetNumero2();
   void SetNumero2(int numero2);
   double Resultado(int numero1, int numero2, char operacao);
   int Soma(int numero1, int numero2);
   int Subtracao(int numero1, int numero2);
   int Multiplicacao(int numero1, int numero2);
   int Divisao(int numero1, int numero2);
   int Resto(int numero1, int numero2); 
   void Limpa();
   std::vector<std::string> Historico(std::string numero1, std::string numero2, char operacao);



private:
    char Operacao;
    int Numero1;
    int Numero2;
    
};
#endif // Calculadora_H