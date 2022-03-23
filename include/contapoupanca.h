#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include <string>
#include "contabancaria.h"
#include "imprimivel.h"

class ContaPoupanca: public ContaBancaria, public Imprimivel{
private:
    double limite;
public:
    ContaPoupanca(int numero_conta, double limite);
    double getLimite();
    void setLimite(double novo_limite);
    void sacar(double valor);
    void mostrarDados();
};

#endif

