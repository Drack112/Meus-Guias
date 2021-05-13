#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n1,n2,n3;
    string opc;

    //Label
    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    n3=n1+n2;

    (n3 >=60) ? opc="Aprovado" : opc="Reprovado";

    cout << opc;

    return 0;
}