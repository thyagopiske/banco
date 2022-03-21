#include "executavel.h"
#include "contacorrente.h"
#include "contapoupanca.h"

Executavel::Executavel(){};

void Executavel::executar(){
    ContaCorrente cCorrente1(0001, 2300);
    ContaPoupanca cPoupanca1(0002, 1000);

    cCorrente1.depositar(400);
    cCorrente1.sacar(1200);

    cPoupanca1.depositar(1000);
    cPoupanca1.sacar(1150);
}
