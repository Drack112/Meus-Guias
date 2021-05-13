#include <iostream>

using namespace std;

int main (){

    //TIPO NOME VALOR

    int vidas;//10, 32
    char letra;//'B' --> Recebe um caractere
    double decimal;//2.499999999999999
    float decimal2;//2.5
    bool vivo;//true or false
    string nome;//"BATATA" --> Recebe um texto

    cout << "Digite o numero de vidas: " << "\n";
    cin >> vidas;

    cout << "Digite uma letra: " << "\n";
    cin >> letra;

    cout << "Digite um valor decimal: " << "\n";
    cin >> decimal;

    cout << "Digite um outro valor em decimal: " << "\n";
    cin >> decimal2;

    cout << "true or false?: " << "\n";
    cin >> vivo;
    
    cout << "Digite um nome: " << "\n";
    cin >> nome;

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
}