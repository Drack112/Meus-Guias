#include <iostream>

using namespace std;

int main(){
    int vetor[5];
    int i;

    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    for (i=0; i<sizeof(vetor)/4; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}