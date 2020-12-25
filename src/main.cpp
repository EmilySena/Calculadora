#include <bits/stdc++.h>
#include "Calculadora.h"
using namespace std;
void display_menu();
int main(){
    display_menu();
    Calculadora c;
    int a,b;
    cout<<"digite os numeros"<<endl;
    cin>>a>>b;
    cout<<"digite a operação"<<endl;
    char op;
    cin>>op;
    double result = c.Resultado(a,b,op);
    cout<<"o resultado é "<<result<<endl;
    cout<<c.Historico(a,b,op).at(0)<<endl;
    //cout<<"imprimindo historico:::  "<<endl;
    //cout<<c.Historico(to_string(a),to_string(b),op).at(0)<<endl;
    //vector<string> hist = c.Historico(to_string(a), to_string(b), op);
   // cout<<"mais dois:\n";
   // cin>>a>>b>>op;
   // c.Historico(to_string(a), to_string(b), op);
   // cout << "mais dois:\n";
   // cin >> a >> b >> op;
    //c.Historico(to_string(a), to_string(b), op);
   // cout<<"\nzgora sim\n";
    //for(auto h : hist){
    //cout<< h<<endl;
   // }
    

    return 0;
}
void display_menu(){
    cout<<"\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
}