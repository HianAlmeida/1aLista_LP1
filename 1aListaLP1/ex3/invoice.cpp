#include"invoice.h"

Invoice::Invoice(int numero, string descricao, int quantidade, double preco){
    setNumeroItem(numero);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}
int Invoice::getNumeroItem(){
    return numeroItem;
}
string Invoice::getDescricao(){
    return descricao;
}
int Invoice::getQuantidade(){
    return quantidade;
}
double Invoice::getPreco(){
    return preco;
}
void Invoice::setNumeroItem(int numero){
    this->numeroItem = numero;
}
void Invoice::setDescricao(string descricao){
    this->descricao = descricao;
}
void Invoice::setQuantidade(int quantidade){
    quantidade>0 ? this->quantidade = quantidade : this->quantidade = 0;
}
void Invoice::setPreco(double preco){
    preco>0 ? this->preco = preco : this->preco = 0;
}
double Invoice::getInvoiceAmount(){
    return quantidade*preco;
}
