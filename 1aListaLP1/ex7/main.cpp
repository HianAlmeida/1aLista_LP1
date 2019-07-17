#include"controle.cpp"
#include<iostream>
int main(){
    ControleDePagamentos pag1;

    pag1.setPagamentos(500, "Hian");
    pag1.setPagamentos(1500, "Hian");
    cout<<"Existe pagamento para o funcionario: "<<pag1.existePagamentoParaFuncionario("Hian")<<endl;
    cout<<"Total de pagamento: "<<pag1.calculaTotalDePagamentos()<<endl;


}
