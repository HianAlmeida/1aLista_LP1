#include"data.h"

Data::Data(){
 dia = 1;
 mes = 1;
 ano = 0001;
}
Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}
void Data::setDia(int dia){
    0<dia && dia<32 ? this->dia = dia : this->dia = 1;
}
void Data::setMes(int mes){
    0<mes && mes<13 ? this->mes = mes : this->mes = 1;
}
void Data::setAno(int ano){
    0<ano ? this-> ano = ano : this->ano = 0001;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}


//int Data::compara(); //nao entendi taokey
string Data::getMesExtenso(int mes){
    switch(mes){
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";

    }
}
//bool isBissexto();
