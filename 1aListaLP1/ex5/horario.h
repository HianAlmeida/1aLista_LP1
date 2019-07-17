#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED

class Horario{
    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Horario();
        Horario(int horas, int minutos, int segundos);
        void setHoras(int horas);
        void setMinutos(int minutos);
        void setSegundos(int segundos);
        void setHorario(int horas, int minutos,int segundos);
        int getHoras();
        int getMinutos();
        int getSegundos();
        void avancarHorario();
};

#endif // HORARIO_H_INCLUDED
