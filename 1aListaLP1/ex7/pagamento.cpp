#include"pagamento.h"

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeFuncionario = "";
}
Pagamento::Pagamento(double valor, string nome){
    setNomeFuncionario(nome);
    setValorPagamento(valor);
}
double Pagamento::getValorPagamento(){
    return valorPagamento;
}
void Pagamento::setValorPagamento(double valor){
    valor>0 ? this->valorPagamento = valor :  this->valorPagamento = 0;
}
string Pagamento::getNomeFuncionario(){
    return nomeFuncionario;
}
void Pagamento::setNomeFuncionario(string nome){
    this->nomeFuncionario = nome;
}
