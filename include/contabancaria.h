#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <iostream>
#include "imprimivel.h"
#include <memory>

class ContaBancaria{
protected:
    int numero_conta;
    double saldo;
public:
    ContaBancaria(int numero_conta, double saldo);
    int getNumeroConta();
    double getSaldo();
    virtual bool sacar(double valor_saque);
    virtual bool depositar(double valor_deposito);
    void transferir(double valor, std::shared_ptr<ContaBancaria>& conta_destino);
    virtual void mostrarDados();
};

#endif
