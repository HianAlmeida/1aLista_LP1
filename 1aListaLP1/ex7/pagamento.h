#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED
#include<string>
using namespace std;

class Pagamento{
    private:
        double valorPagamento;
        string nomeFuncionario;
    public:
        Pagamento();
        Pagamento(double valor, string nome);
        double getValorPagamento();
        void setValorPagamento(double valor);
        string getNomeFuncionario();
        void setNomeFuncionario(string nome);
};


#endif // PAGAMENTO_H_INCLUDED
