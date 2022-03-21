#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <iostream>

class ContaBancaria {
protected:
    int numero_conta;
    double saldo;
public:
    ContaBancaria(int numero_conta, double saldo);
    virtual bool sacar(double valor_saque);
    virtual bool depositar(double valor_deposito);
};

#endif
