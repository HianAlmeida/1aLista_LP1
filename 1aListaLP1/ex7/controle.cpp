#include"controle.h"

ControleDePagamentos::ControleDePagamentos(){
    for(int i = 0; i<10; i++){
        pagamentos[i].setNomeFuncionario("");
        pagamentos[i].setValorPagamento(0);
    }
}
void ControleDePagamentos::setPagamentos(double valor, string nome){
    int i;
    for(i=0; i<10; i++){
        if(pagamentos[i].getValorPagamento() == 0){
            break;
        }
    }
    pagamentos[i].setNomeFuncionario(nome);
    pagamentos[i].setValorPagamento(valor);

}
double ControleDePagamentos::calculaTotalDePagamentos(){
    double total = 0;
    for(int i=0; i<10;i++){
        total += pagamentos[i].getValorPagamento();
    }
    return total;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario){
    for(int i = 0; i<10; i++){
        if(pagamentos[i].getNomeFuncionario()== nomeFuncionario){
            return true;
        }
    }
    return 0;
}
