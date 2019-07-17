#include"horario.h"

Horario::Horario(){
    horas = 0;
    minutos  = 0;
    segundos = 0;
}
Horario::Horario(int horas, int minutos, int segundos){
    setHoras(horas);
    setMinutos(minutos);
    setSegundos(segundos);
}
void Horario::setHoras(int horas){
    0<horas && horas<25 ? this->horas = horas : this->horas = 0;

}
void Horario::setMinutos(int minutos){
    0<minutos && minutos<61 ? this->minutos = minutos : this->minutos = 0;
}
void Horario::setSegundos(int segundos){
    0<segundos && segundos<61 ? this->segundos = segundos : this->segundos = 0;
}
void Horario::setHorario(int horas, int minutos,int segundos){
    setHoras(horas);
    setMinutos(minutos);
    setSegundos(segundos);
}
int Horario::getHoras(){
    return horas;
}
int Horario::getMinutos(){
    return minutos;
}
int Horario::getSegundos(){
    return segundos;
}
void Horario::avancarHorario(){
    segundos++;
    if(segundos>60){
        segundos = 0;
        minutos++;
        if(minutos>60){
            minutos = 0;
            horas++;
            if(horas>24){
                horas = 0;
            }
        }
    }
}
