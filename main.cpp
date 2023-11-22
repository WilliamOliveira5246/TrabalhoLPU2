#include <iostream>
#include <vector>
#include "bancoDAO.hpp"
#include "geral.hpp"

using namespace std;

int main(){

    clear();
    int selecao = 0;
    int matricula = 0;
    BancoDAO banco;
    carregarDeArquivoBanco();


    while (selecao != 9){

        cout << "============================================" << endl;
        cout << "||        O que você deseja fazer?        ||" << endl;
        cout << "============================================" << endl;
        cout << "|| 1 - Cadastrar Professor                ||" << endl;
        cout << "|| 2 - Cadastrar TecnicoADM               ||" << endl;
        cout << "|| 3 - Listar Professores                 ||" << endl;
        cout << "|| 4 - Listar TecnicosADM                 ||" << endl;
        cout << "|| 5 - Apagar Professor                   ||" << endl;
        cout << "|| 6 - Apagar TecnicoADM                  ||" << endl;
        cout << "|| 7 - Buscar Professor                   ||" << endl;
        cout << "|| 8 - Buscar TecnicoADM                  ||" << endl;
        cout << "|| 9 - Sair                               ||" << endl;
        cout << "============================================" << endl;
    
        cout << "Por favor, escolha uma opção válida (1-9): ";
    
        while (!(cin >> selecao))
        {
            cout << "Opção inválida. Por favor, escolha uma opção válida (1-9): ";
            cin.clear();
            while (cin.get() != '\n') {}
        }

        switch (selecao)
        {
            case 1:
                clear();
                cout << "[CADASTRAR PROFESSOR]\n";
                banco.cadastrarProfessor();
                pressQualquer();
                break;
            case 2:
                clear();
                cout << "[CADASTRAR TECNICOADM]\n";
                banco.cadastrarTecnicoADM();
                pressQualquer();
                break;
            case 3:
                clear();
                cout << "[LISTAR PROFESSORES]\n";
                banco.listarProfessores();
                pressQualquer();
                break;
            case 4:
                clear();
                cout << "[LISTAR TECNICOSADM]\n";
                banco.listarTecnicosADM();
                pressQualquer();
                break;
            case 5:
                clear();
                cout << "[APAGAR PROFESSOR]\n";
                cin >> matricula;
                banco.deletarProfessor(matricula);
                pressQualquer();
                break;
            case 6:
                clear();
                cout << "[APAGAR TECNICOADM]\n";
                cin >> matricula;
                banco.deletarTecnicoADM(matricula);
                pressQualquer();
                break;
            case 7:
                clear();
                cout << "[BUSCAR PROFESSOR]\n";
                cin >> matricula;
                banco.buscarProfessor(matricula);
                pressQualquer();
                break;
            case 8:
                clear();
                cout << "[BUSCAR TECNICOADM]\n";
                cin >> matricula;
                banco.buscarTecnicoADM(matricula);
                pressQualquer();
                break;
            case 9:
                clear();
                salvarEmArquivoBanco(banco);
                cout << "Saindo do programa. Até mais!" << endl;
                pressQualquer();
                break;
            default:
                cout << "Opção inválida. Por favor, escolha uma opção válida (1-9)." << endl;
        }

    }

    return 0;
}