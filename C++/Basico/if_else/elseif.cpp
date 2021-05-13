#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n1,n2,n3;
    char opc;

    //Label
    inicio:

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    n3=n1+n2;

    if (n3 >=60){
        cout << "\nAluno Aprovado\n";
    }else if(n3 >=40){
        cout << "\nAluno em recuperação\n";
    }else{
        cout << "\nAluno Reprovado\n";
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }if(opc == 'n' or opc == 'N'){
        system("clear");
        cout << "\nSaindo do programa\n";
    }

    return 0;
}