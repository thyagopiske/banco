#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "contabancaria.h"
#include "imprimivel.h"
#include <string>

class ContaCorrente: public ContaBancaria, public Imprimivel{
private:
    double taxaDeOperacao;
public:
    ContaCorrente(int numero_conta, double taxaDeOperacao);
    void setTaxaDeOperacao(double nova_taxa);
    double getTaxaDeOperacao();
    void sacar(double valor);
    void depositar(double valor);
    void mostrarDados();
};

#endif
