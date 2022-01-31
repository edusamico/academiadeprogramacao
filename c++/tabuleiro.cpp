#include <iostream>
using namespace std;
int main () {
    int N;

    cout << "informe o tamanho (inteiro) do tabuleiro" << endl;
    cin >> N;

    if (N % 2 == 0){
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                if ((row + col) % 2 == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
            cout << endl;
        }

    } else {
        cout << "o numero informado precisar ser par" << endl;
    }
    return 0;
}
