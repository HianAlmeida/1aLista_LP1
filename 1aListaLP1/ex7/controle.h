#ifndef CONTROLE_H_INCLUDED
#define CONTROLE_H_INCLUDED
#include"pagamento.cpp"

class ControleDePagamentos{
    private:
        Pagamento pagamentos[10];
    public:
        ControleDePagamentos();
        void setPagamentos(double valor, string nome);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);

};

#endif // CONTROLE_H_INCLUDED
