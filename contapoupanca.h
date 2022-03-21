#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include <string>
#include "contabancaria.h"
#include "imprimivel.h"

class ContaPoupanca: public ContaBancaria, public Imprimivel {
private:
    double limite;
public:
    ContaPoupanca(int numero_conta, double saldo);
    virtual bool sacar(double valor);
    virtual void mostrarDados();
};

#endif

