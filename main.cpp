#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char resposta;

    do {
        double a, b, c, d;

        cout << "Digite quatro numeros (separados por espaco): ";
        cout << endl << "Para digitar a razao use a letra a com acento grave e a letra b" << endl;
        cin >> a >> b >> c >> d;

        double razao = a / b;
        double proporcao = (a * d) / (b * c);

        cout << "Razao: " << razao << endl;
        cout << "Proporcao: " << proporcao << endl;

        cout << "Deseja resolver outro cálculo? (S/N) ";
        cin >> resposta;
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
