#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include<string>


using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa(string nome);
        Pessoa(string nome, int idade, string telefone);
        string getNome();
        int getIdade();
        string getTelefone();
        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);
};

#endif // PESSOA_H_INCLUDED
