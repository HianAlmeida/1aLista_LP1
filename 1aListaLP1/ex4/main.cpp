#include"data.cpp"
#include<iostream>

int main(){
    Data d1 = Data();
    Data d2 = Data(29, 8, 2000);

    cout<<"Dia: "<<d1.getDia()<<endl;
    cout<<"Mes: "<<d1.getMes()<<endl;
    cout<<"Ano: "<<d1.getAno()<<"\n"<<endl;

    d2.setDia(31);
    d2.setMes(16);
    d2.setAno(-3);

    cout<<"Dia: "<<d2.getDia()<<endl;
    cout<<"Mes: "<<d2.getMes()<<endl;
    cout<<"Ano: "<<d2.getAno()<<"\n"<<endl;


    d2.setAno(2015);

    cout<<"Bissexto: "<<d2.isBissexto()<<endl;

    d2.setAno(2016);

    cout<<"Bissexto: "<<d2.isBissexto()<<endl;

    cout<<"Compara d1 com d2: "<<d1.compara(d2)<<endl;
    return 0;
}
