#include "executavel.h"
#include "contacorrente.h"
#include "contapoupanca.h"
#include "relatorio.h"

Executavel::Executavel(){};

void Executavel::executar(){
    ContaCorrente cCorrente1(0001, 2300);
    ContaPoupanca cPoupanca1(0002, 1000);

    cCorrente1.depositar(400);
    cCorrente1.sacar(1200);

    cPoupanca1.depositar(1000);
    cPoupanca1.sacar(2150);

    Relatorio relatorio;
    relatorio.gerarRelatorio(cCorrente1);
    relatorio.gerarRelatorio(cPoupanca1);
}
