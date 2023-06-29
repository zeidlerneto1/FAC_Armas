#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

class Arma {
private:
    int canos, molas, gatilhos, prata;

public:
    Arma(int canos, int molas, int gatilhos, int prata);
    int getCanos();
    int getMolas();
    int getGatilhos();
    int getPrata();
    void setCanos(int value);
    void setMolas(int value);
    void setGatilhos(int value);
    void setPrata(int value);
};

Arma::Arma(int canos, int molas, int gatilhos, int prata) {
    this->canos = canos;
    this->molas = molas;
    this->gatilhos = gatilhos;
    this->prata = prata;
}

int Arma::getCanos() {
    return canos;
}

int Arma::getMolas() {
    return molas;
}

int Arma::getGatilhos() {
    return gatilhos;
}

int Arma::getPrata() {
    return prata;
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
void armas(){
string ok;
    do
    {
    cout << "PISTOLA:HK,CERAMIC,FIVE SEVEM, TEC-9";
    cout << "SMG MK2 ,MTAR ,UZI";
    cout << "FUZIL AK-47,G36";
        cin >> ok;
    } while (ok != "ok");
}
void receitas() {
    string ok;
    do {
        cout << "TABELA DE PREÇOS DE ARMAS" << endl;
        cout << "FUZIL SUPERIOR CANO=10 MOLA=11 X2" << endl;
        cout << "FUZIL INFERIOR PRATA=12 GATILHO=4 X2" << endl;
        cout << "TEC-9 SUPERIOR CANO=3 MOLA=6" << endl;
        cout << "TEC-0 INFERIOR PRATA=6 GATILHO=4" << endl;
        cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}

void listarP() {
    string ok;
    do {
        cout << "TABELA DE PREÇOS DE ARMAS" << endl;
        cout << "PISTOLA 180k 200k" << endl;
        cout << "SMG 270k 300k" << endl;
        cout << "FUZIL 405k 450k" << endl;
        cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}

int main() {
    int opcao;
    do {
        cout << "1- Listar preços" << endl;
        cout << "2- Receita das armas x1" << endl;
        cout << "3- Listar Armas" << endl;
        cout << "4- Calcular quantidade de materiais" << endl;
        cout << "5- Sair" << endl;
        cin >> opcao;
    } while (opcao < 1 || opcao > 5);

    switch (opcao) {
        case 1:
            cout << "LISTANDO PREÇOS ..." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            listarP();
            break;
        case 2:
            cout << "LISTANDO RECEITAS ..." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            receitas();
            break;
        case 3:
            cout << "LISTANDO ARMAS..." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            void armas();
            break;
        case 5:
            return 0;
            break;
        default:
            break;
    }

    return 0;
}
