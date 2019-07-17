#include "voo.cpp"
#include<iostream>
int main(){
    Voo v1= Voo(10,9,2019,13,30,00,5600);
    cout<<"Proxima cadeira livre: "<<v1.proximoLivre()<<endl;
    cout<<"Cadeira 36: "<<v1.verifica(36)<<endl;
    v1.ocupa(36);
    cout<<"Numero de vagas disponivel: "<<v1.vagas()<<endl;
    cout<<"Numero do voo: "<<v1.getNumVoo()<<endl;
    cout<<"Data do voo: "<<v1.getData().getDia()<<"/"<<v1.getData().getMes()<<"/"<<v1.getData().getAno()<<endl;
    cout<<"Horario do voo: "<<v1.getHorario().getHoras()<<":"<<v1.getHorario().getMinutos()<<endl;
    cout<<"Cadeira 36: "<<v1.verifica(36)<<endl;

    return 0;
}
