#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include<string>

using namespace std;
class Invoice{
    private:
        int numeroItem;
        string descricao;
        int quantidade;
        double preco;

    public:
        Invoice(int numero, string descricao, int quantidade, double preco);
        int getNumeroItem();
        string getDescricao();
        int getQuantidade();
        double getPreco();
        void setNumeroItem(int numero);
        void setDescricao(string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);
        double getInvoiceAmount();
};


#endif // INVOICE_H_INCLUDED
