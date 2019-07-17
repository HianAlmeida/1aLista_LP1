#ifndef VOO_H_INCLUDED
#define VOO_H_INCLUDED
#include"data.cpp"
#include"horario.cpp"

class Voo{
    private:
        Data estaData;
        Horario esteHorario;
        bool lugares[100];
        int numeroVoo;

    public:
        Voo();
        Voo(int dia, int mes, int ano, int hora, int minutos, int segundos, int numeroVoo);
        int proximoLivre();
        string verifica(int lugar);
        bool ocupa(int lugar);
        int vagas();
        int getNumVoo();
        Data getData();
        Horario getHorario();
};


#endif // VOO_H_INCLUDED
