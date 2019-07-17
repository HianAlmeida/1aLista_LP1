#include"voo.h"

Voo::Voo(){
    numeroVoo = 0;
    estaData = Data(0,0,0000);
    esteHorario =  Horario(0,0,0);
    for(int i=0; i<100; i++){
        lugares[i] = false;
    }
}
Voo::Voo(int dia, int mes, int ano, int hora, int minutos, int segundos, int numeroVoo){
    estaData =  Data(dia, mes, ano);
    esteHorario =  Horario(hora, minutos, segundos);
    this->numeroVoo = numeroVoo;
}
int Voo::proximoLivre(){
    int i;
    for(i=0; i<100; i++){
        if(lugares[i]== true){
            return i;
        }
    }
}
string Voo::verifica(int lugar){
   if(lugares[lugar] == true)
        return "ocupada";
    else
        return "disponivel";
}
bool Voo::ocupa(int lugar){
    if(lugares[lugar]== true){
        return false;
    }else{
        lugares[lugar] = true;
        return true;
    }
}
int Voo::vagas(){
 int j = 0;
 for(int i=0; i<100; i++){
    if(lugares[i] == false){
        j++;
    }
 }
    return j;
}
int Voo::getNumVoo(){
    return numeroVoo;
}
Data Voo::getData(){
    return estaData;
}
Horario Voo::getHorario(){
    return esteHorario;
}
