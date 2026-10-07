#include <iostream>

using namespace std;

int main () {

    int n;
    int opcao;

    for (int i=0; i <1; i=0) {
        cout << "Escolha um desses numeros \n";
        cout << "Opcao 1 \n";
        cout << "Opcao 2 \n";
        cout << "Opcao 3 \n";
        cout << "Opcao 4 \n";
        cout << "Se escolheres 0 vais sair do programa\n";
        cin >> n;
        switch (opcao) {
            case 0:
                break;
            case 1:
                cout << "Voce e um bom programador \n";
                break;
            case 2:
                cout << "Voce e muito bom programador \n";
                break;
            case 3:
                cout << "Voce e um excelente programador \n";
                break;
            default:
                cout << "Nao sei oque esta pedindo \n";
                break;

    }
    if (n == 0) break;



    return 0;
}
