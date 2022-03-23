#include <iostream>
#include <memory>
#include "executavel.h"
#include "menu.h"
#include "contabancaria.h"
#include "contapoupanca.h"
#include "contacorrente.h"
#include "banco.h"

int main(){
    Menu menu;
    Banco banco;
    int opcao1;
    do
    {
        opcao1 = menu.exibeMenuPrincipal();
        switch(opcao1)
        {
            case 1:
            {
                int opcao2 = menu.exibeMenuCriarConta();
                int numero_conta;
                std::cout << "\nInforme os dados da conta: \n"
                            << "Numero da conta: ";
                std::cin >> numero_conta;
                if(opcao2==1)
                {
                    double taxaDeOperacao;
                    std::cout << "Taxa de operacao: ";
                    std::cin >> taxaDeOperacao;
                    std::shared_ptr<ContaBancaria> cCorrente = std::make_shared<ContaCorrente>(numero_conta, taxaDeOperacao);
                    banco.inserir(cCorrente);
                }
                else
                {
                    double limite;
                    std::cout << "Limite: ";
                    std::cin >> limite;                    std::shared_ptr<ContaBancaria> cPoupanca = std::make_shared<ContaPoupanca>(numero_conta, limite);
                    banco.inserir(cPoupanca);
                }
                std::cout << "Conta criada com sucesso!\n";
            }
                break;
            case 2:
            {
                int numero_conta;
                std::cout << "Informe o numero da conta: ";
                std::cin >> numero_conta;
                auto conta = banco.procurarConta(numero_conta);
                if(conta)
                {
                    int opcao2 = menu.exibeMenuSelecionarConta();
                    switch(opcao2)
                    {
                        case 1:
                        {
                            double valor;
                            std::cout << "\nInforme o valor a ser depositado: ";
                            std::cin >> valor;
                            conta->depositar(valor);
                        }
                            break;
                        case 2:
                        {
                            int valor;
                            std::cout << "\nInforme o valor a sacar: ";
                            std::cin >> valor;
                            conta->sacar(valor);
                        }
                            break;
                        case 3:
                        {
                            int valor, numero_conta;
                            std::cout << "\nInforme o numero da conta destino: ";
                            std::cin >> numero_conta;
                            auto conta_destino = banco.procurarConta(numero_conta);
                            if(conta_destino)
                            {
                                std::cout << "\nInforme o valor a transferir: ";
                                std::cin >> valor;
                                conta->transferir(valor, conta_destino);
                                std::cout << "Transferencia realizada com sucesso!\n";
                            }
                            else
                            {
                                std::cout << "Conta inexistente\n";
                            }

                        }
                            break;
                        case 4:
                        {
                            std::cout << "\nDados da conta: ";
                            conta->mostrarDados();
                        }
                            break;
                        default:
                            break;
                    }
                }
                else
                {
                    std::cout << "Conta inexistente\n";
                }
            }
                break;
            case 3:
            {
                int numero_conta;
                std::cout << "\nInforme o numero da conta: ";
                std::cin >> numero_conta;
                auto conta_a_remover = banco.procurarConta(numero_conta);
                if(conta_a_remover)
                {
                    banco.remover(conta_a_remover);
                    std::cout << "Conta removida com sucesso!\n";
                }
                else
                {
                    std::cout << "Conta inexistente!\n";
                }
            }
                break;
            case 4:
            {
                std::cout << "\nDados de todas as contas do banco: \n";
                banco.mostrarDados();
            }
                break;
            default:
                break;
        }

    }while(opcao1 != 5);

    std::cout << "\nObrigado por utilizar nossos servicos! Volte sempre!\n";
    return 0;
}
