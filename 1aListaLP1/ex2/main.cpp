#include "pessoa.cpp"
#include <iostream>
using namespace std;
int main(){
    Pessoa p1 = Pessoa("Carlos");
    Pessoa p2 = Pessoa("João", 21, "(83)996156363");

    cout<<"Nome: "<<p1.getNome()<<endl;
    cout<<"Idade: "<<p1.getIdade()<<endl;
    cout<<"Telefone: "<<p1.getTelefone()<<"\n"<<endl;

    p2.setNome("Pedro");
    p2.setIdade(36);
    p2.setTelefone("(83)999941409");

    cout<<"Nome: "<<p2.getNome()<<endl;
    cout<<"Idade: "<<p2.getIdade()<<endl;
    cout<<"Telefone: "<<p2.getTelefone()<<"\n"<<endl;

    return 0;
}
