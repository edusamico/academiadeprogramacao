#include <iostream>
using namespace std;
int main () {
    int N;

    cout << "informe o numero (inteiro) de alunos" << endl;
    cin >> N;

    cout << "informe as notas dos "<< N <<" alunos" << endl;

    int aprovados = 0;
    int reprovados = 0;
    float maior_ate_agora = 0; 
    float menor_ate_agora = 10;
    float soma = 0;

    for (int counter = 0; counter < N; counter = counter + 1) {
        float nova_nota;
        cin >> nova_nota;
        

        if (nova_nota >= 7) {
            aprovados = aprovados + 1;
        } else {
            reprovados = reprovados + 1;
        }

        if (nova_nota > maior_ate_agora) {
            maior_ate_agora = nova_nota;
        }
        if (nova_nota < menor_ate_agora) {
            menor_ate_agora = nova_nota;
        }

        soma = soma + nova_nota;
    }

    float media = soma / N;

    cout << "Numero de aprovados = " << aprovados << endl;
    cout << "Numero de reprovados = " << reprovados << endl;
    cout << "A maior nota foi = " << maior_ate_agora << endl;
    cout << "A menor nota foi = " << menor_ate_agora << endl;
    cout << "A média da turma ficou de " << media << endl;
    
    return 0;
}
