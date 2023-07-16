#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Arma {
private:
    int canos, molas, gatilhos, prata, airsoft;

public:
    Arma(int canos, int molas, int gatilhos, int prata);
    void setCanos(int value);
    void setMolas(int value);
    void setGatilhos(int value);
    void setPrata(int value);
    void setQTDarma(int value);
    int calculo();
};

int Arma::calculo(){
    // base para pra facilitar//
int Tgatilhos,Tcanos,Tmolas,Tprata,Tairsoft;
    Tairsoft= airsoft * 2;
    Tgatilhos= gatilhos * Tairsoft;
    Tcanos= canos * Tairsoft;
    Tmolas= molas * Tairsoft;
    Tprata= prata * Tairsoft;
    cout << "Gatilho: "<< Tgatilhos << endl; 
    cout << "Canos: " << Tcanos << endl;
    cout << "Molas: " << Tmolas << endl;
    cout << "Prata: " <<Tprata << endl;
    cout << "saindo para principal " << endl;
    return 0;
}

Arma::Arma(int canos, int molas, int gatilhos, int prata) {
    this->canos = canos;
    this->molas = molas;
    this->gatilhos = gatilhos;
    this->prata = prata;
    
}

void Arma::setCanos(int value) {
    canos = value;
}

void Arma::setMolas(int value) {
    molas = value;
}

void Arma::setGatilhos(int value) {
    gatilhos = value;
}

void Arma::setPrata(int value) {
    prata = value;
}
void Arma::setQTDarma(int value){
    airsoft = value;
}

void armas(){
string ok;
    do
    {
    cout << "-----------------------------"<< endl;
    cout << "|Lista de Armas              |"<< endl;
    cout << "|PISTOLA->";
    cout << "HK,FIVE SEVEM      |"<< endl;
    cout << "|SMG -> MK2 ,MTAR ,UZI,TEC-9 |"<< endl;
    cout << "|FUZIL -> AK-47,G36          |"<< endl;
    cout << "-----------------------------"<< endl;
    cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}
void receitas() {
string ok;
    do {
    cout << left << setw(15) << "Arma";
    cout << left << setw(25) << "Superior";
    cout << left << setw(15) << "Inferior" << endl;

    cout << left << setw(15) << "FUZIL";
    cout << left << setw(25) << "CANO=10 MOLA=11";
    cout << left << setw(15) << "PRATA=12 GATILHO=4" << endl;

    cout << left << setw(15) << "TEC-9";
    cout << left << setw(25) << "CANO=3 MOLA=6";
    cout << left << setw(15) << "PRATA=6 GATILHO=4" << endl;

    cout << left << setw(15) << "HK";
    cout << left << setw(25) << "CANO=2 PRATA=4";
    cout << left << setw(15) << "PRATA=6 GATILHO=2" << endl;

    cout << left << setw(15) << "CERAMICA";
    cout << left << setw(25) << "CANO=3 MOLA=5";
    cout << left << setw(15) << "PRATA=7 GATILHO=2" << endl;

    cout << left << setw(15) << "FIVE SEVEM";
    cout << left << setw(25) << "CANO=3 MOLA=5";
    cout << left << setw(15) << "PRATA=6 GATILHO=2" << endl;

    cout << left << setw(15) << "SMG";
    cout << left << setw(25) << "CANO=4 MOLA=8";
    cout << left << setw(15) << "BRONZE=8 GATILHO=3" << endl;

    cout << left << setw(15) << "MTAR";
    cout << left << setw(25) << "CANO=5 MOLA=9";
    cout << left << setw(15) << "BRONZE=10 GATILHO=3" << endl;

    cout << left << setw(15) << "UZI";
    cout << left << setw(25) << "CANO=4 MOLA=8";
    cout << left << setw(15) << "BRONZE=8 GATILHO=3" << endl;
    cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}

void listarP() {
string ok;
    do {
        cout << "-----------------------------"<< endl;
        cout <<"|TABELA DE PRECOS DE ARMAS  |" << endl;
        cout <<"|PISTOLA -> 180k 200k       |" << endl;
        cout <<"|SMG -> 270k 300k           |" << endl;
        cout <<"|FUZIL -> 405k 450k         |" << endl;
        cout <<"-----------------------------" << endl;
        cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}
void valorfinal(){
string ok;
    do
    {
        int valormax;
        float porcentagem,calc;
        cout << "USANDO A TABELA DE PREÇOS DE ARMAS" << endl;
        cout << "usando * 0.90, 0.95, 1.00 pra calcular dentro da tebela" << endl;
        cout << "Digite o valor maximo da arma: ";
        cin >> valormax;
        cout << "Digite a Porcentagem: ";
        cin >> porcentagem;
        calc = valormax * porcentagem;
        cout << fixed << setprecision(2);
        cout << "Valor a ser cobrado: " << calc << " na porcetagem " << porcentagem << endl;
        cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}

int main() {
Arma guns(0, 0, 0, 0);
while (1)
{
    int opcao;
    while (1) {
        cout << "1- Listar precos" << endl;
        cout << "2- Receita das armas x1" << endl;
        cout << "3- Listar Armas" << endl;
        cout << "4- Calcular quantidade de materiais" << endl;
        cout << "5- Calcular Valor Final de Venda" << endl;
        cout << "6- Sair" << endl;
        cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "LISTANDO PRECOS ..." << endl;
            listarP();
            break;
        case 2:
            cout << "LISTANDO RECEITAS ..." << endl;
            receitas();
            break;
        case 3:
            cout << "LISTANDO ARMAS..." << endl;
            armas();
            break;
        case 4:
            cout << "inserindo valores..." << endl;
            int canos, molas, prata, gatilhos,qtd;
            cout << "Canos: ";
            cin >> canos;
            guns.setCanos(canos);
            cout << "Molas: ";
            cin >> molas;
            guns.setMolas(molas); 
            cout << "Prata: ";
            cin >> prata;
            guns.setPrata(prata);
            cout << "Gatilhos: ";
            cin >> gatilhos;
            guns.setGatilhos(gatilhos);
            cout << "QTD de armas: ";
            cin >> qtd;
            guns.setQTDarma(qtd);
            guns.calculo();
            break;
        case 5:
            valorfinal();
            break;
        case 6:
            return 0;
            break;
        default:
            break;
            }  
        }
    }
return 0;
}