#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <iostream>
#include "imprimivel.h"
#include <memory>

class ContaBancaria{
protected:
    int numero_conta;
    double saldo=0;
public:
    ContaBancaria(int numero_conta);
    int getNumeroConta();
    double getSaldo();
    virtual void sacar(double valor_saque);
    virtual void depositar(double valor_deposito);
    void transferir(double valor, std::shared_ptr<ContaBancaria>& conta_destino);
    virtual void mostrarDados();
};

#endif
