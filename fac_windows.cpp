#include <iostream>
#include <string>

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
    cout << "Prata: " <<Tprata;
    cout << "saindo para principal " << endl;
    return 1;
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
    cout << "Lista de Armas" << endl;
    cout << "PISTOLA:HK,CERAMIC,FIVE SEVEM, TEC-9" << endl;
    cout << "SMG MK2 ,MTAR ,UZI" << endl;
    cout << "FUZIL AK-47,G36" << endl;
    cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}
void receitas() {
string ok;
    do {
        cout << "TABELA DE PRECOS DE ARMAS" << endl;
        cout << "FUZIL SUPERIOR CANO=10 MOLA=11 X2" << endl;
        cout << "FUZIL INFERIOR PRATA=12 GATILHO=4 X2" << endl;
        cout << "TEC-9 SUPERIOR CANO=3 MOLA=6" << endl;
        cout << "TEC-9 INFERIOR PRATA=6 GATILHO=4" << endl;
        cout << "HK SUPERIOR CANO=2 PRATA=4" << endl;
        cout << "HK INFERIOR  prata= 6 gatilho=2" << endl;
        cout << "CEREMAICA SUPERIORcano=3 mola=5" << endl;
        cout << "CERAMICA INFERIOR prata=7 gatilho=2" << endl;
        cout << "FIVE SEVEM SUPEIROR cano =3 mola =5" << endl;
        cout << "FIVE SEVEM INFERIOR prata=6 gatilho =2" << endl;
        cout << "SMG SUPERIOR CANO =4 MOLA =8" << endl;
        cout << "SMG INFERIOR BRONZE=8 GATILHO=3" << endl;
        cout << "MTAR SUPEIROR CANO=5 MOLA=9" << endl;
        cout << "MTAR INFERIOR BRONZE=10 GATILHO=3" << endl;
        cout << "UZI SUPEIROR CANO=4 MOÇA =8" << endl;
        cout << "UZI INFEIROR BRONZE=8 GATILHO=3" << endl;
        cout << "Digite 'ok' para sair: ";
        cin >> ok;
    } while (ok != "ok");
}

void listarP() {
string ok;
    do {
        cout << "TABELA DE PRECOS DE ARMAS" << endl;
        cout << "PISTOLA 180k 200k" << endl;
        cout << "SMG 270k 300k" << endl;
        cout << "FUZIL 405k 450k" << endl;
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
        cout << "5- Sair" << endl;
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
        case 5:
            return 0;
            break;
        default:
            break;
            }  
        }
    }
return 0;
}