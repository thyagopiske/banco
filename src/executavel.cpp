#include "executavel.h"
#include "contacorrente.h"
#include "contapoupanca.h"
#include "relatorio.h"

//TEMP
//#include "Banco.h"
//#include <memory>

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

//    TEMP
//     Banco banco;
//    std::shared_ptr<ContaBancaria> cC1 = std::make_shared<ContaCorrente>(0001, 1000);
//    std::shared_ptr<ContaBancaria> cP1 = std::make_shared<ContaPoupanca>(0002, 1000);
//    banco.inserir(cP1);
//    banco.inserir(cC1);
//    banco.mostrarDados();
//    cP1->transferir(300, cC1);
//    banco.mostrarDados();
//    cC1->transferir(100, cP1);
//    banco.mostrarDados();
}
