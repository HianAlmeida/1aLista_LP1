#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include<string>
using namespace std;

class Data{
    private:
        int dia, mes, ano;
    public:
        Data();
        Data(int dia, int mes, int ano);
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();
        int compara();
        string getMesExtenso(int mes);
        bool isBissexto();

};

#endif // DATA_H_INCLUDED
