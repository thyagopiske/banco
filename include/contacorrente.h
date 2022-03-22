#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "contabancaria.h"
#include "imprimivel.h"
#include <string>

class ContaCorrente: public ContaBancaria, public Imprimivel{
private:
    double taxaDeOperacao; //se é um valor fixo posso declarar aq direto?
public:
    ContaCorrente(int numero_conta, double saldo);
    bool sacar(double valor);
    bool depositar(double valor);
    void mostrarDados();
};

#endif
