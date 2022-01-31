#include <iostream>
using namespace std;

int main () {
    int H;

    cout << "Informe a altura do triangulo" << endl;
    cin >> H;

    int sharp_number = 1;
    int spaces = H - 1;
    for (int row = 0; row < H; row++) {

        for (int col = 0; col < spaces; col++) {
            cout << " ";
        }

        for (int col = 0; col < sharp_number; col++){
            cout << "#";
    }
   
    cout << endl;
    sharp_number = sharp_number + 2;
    spaces--;
    }
    
    return 0; 
}

