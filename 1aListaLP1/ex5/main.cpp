#include"horario.cpp"
#include<iostream>
using namespace std;
int main(){
    Horario h1 = Horario();
    Horario h2 = Horario(25,16,52);

    cout<<"Horario1 :"<<h1.getHoras()<<":"<<h1.getMinutos()<<":"<<h1.getSegundos()<<endl;
    cout<<"Horario2 :"<<h2.getHoras()<<":"<<h2.getMinutos()<<":"<<h2.getSegundos()<<endl;

    h1.setHoras(12);
    h1.setMinutos(43);
    h1.setSegundos(13);

    h2.setHorario(24,60,60);

    h1.avancarHorario();
    h2.avancarHorario();

    cout<<"Horario1 :"<<h1.getHoras()<<":"<<h1.getMinutos()<<":"<<h1.getSegundos()<<endl;
    cout<<"Horario2 :"<<h2.getHoras()<<":"<<h2.getMinutos()<<":"<<h2.getSegundos()<<endl;

}
