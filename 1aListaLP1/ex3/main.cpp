#include"invoice.cpp"
#include<iostream>
int main (){
    Invoice produto1 = Invoice(70, "Descricao Produto", 5, 25.00);
    //Invoice produto2;

    cout <<"Numero do item: "<<produto1.getNumeroItem()<<endl;
    cout<<"Descricao do item: "<<produto1.getDescricao()<<endl;
    cout<<"Quantidade comprada: "<<produto1.getQuantidade()<<endl;
    cout<<"Preco unitario: "<<produto1.getPreco()<<endl;
    cout<<"Valor da fatura: "<<produto1.getInvoiceAmount()<<endl;

    return 0;


}

