#include "menu.h"
#include <iostream>
#include <Banco.h>

Menu::Menu(){}

int Menu::exibeMenuPrincipal()
{
    int opcao;
    std::cout << "\nMENU PRINCIPAL\n"
                << "1 - Criar conta\n"
                << "2 - Selecionar conta\n"
                << "3 - Remover conta\n"
                << "4 - Gerar relatorio\n"
                << "5 - Finalizar\n"
                << "Digite a opcao escolhida: ";
    std::cin >> opcao;
    while(opcao < 1 || opcao > 5)
    {
        std::cout << "Opcao invalida! Digite um numero entre 1 e 5: ";
        std::cin >> opcao;
    }

    system("clear||cls");
    return opcao;
}

int Menu::exibeMenuSelecionarConta()
{
    int opcao;
    std::cout << "\nMENU CONTA\n"
                << "1 - Depositar\n"
                << "2 - Sacar\n"
                << "3 - Transferir\n"
                << "4 - Gerar relatorio\n"
                << "5 - Retornar ao Menu Principal\n"
                << "Digite a opcao escolhida: ";
    std::cin >> opcao;
    while(opcao < 1 || opcao > 5)
    {
        std::cout << "Opcao invalida! Digite um numero entre 1 e 5: ";
        std::cin >> opcao;
    }

    system("clear||cls");
    return opcao;
}

int Menu::exibeMenuCriarConta()
{
    int opcao;
    std::cout << "\nMENU CRIACAO DE CONTA\n"
                << "1 - Conta Corrente\n"
                << "2 - Conta Poupanca\n"
                << "Digite a opcao escolhida: ";
    std::cin >> opcao;
    while(opcao < 1 || opcao > 5)
    {
        std::cout << "Opcao invalida! Digite um numero entre 1 e 2: ";
        std::cin >> opcao;
    }

    system("clear||cls");
    return opcao;
}
