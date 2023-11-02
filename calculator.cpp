#include <iostream>

using namespace std;

// Function to calculate factorial
double computeFactorial(double n) {
    if (n <= 1) return 1;
    else return n * computeFactorial(n - 1);
}

int main() {
    double firstNumber, secondNumber;
    char operation, continueCalc;

    do {
        cout << "Ingrese el primer número: ";
        cin >> firstNumber;

        cout << "Ingrese el operador (+, -, *, /, %, !): ";
        cin >> operation;

        // We only ask for the second number if we're not calculating a factorial
        if (operation != '!') {
            cout << "Ingrese el segundo número: ";
            cin >> secondNumber;
        }

        switch(operation) {
            case '+':
                cout << "Resultado: " << firstNumber + secondNumber << endl;
                break;
            case '-':
                cout << "Resultado: " << firstNumber - secondNumber << endl;
                break;
            case '*':
                cout << "Resultado: " << firstNumber * secondNumber << endl;
                break;
            case '/':
                if (secondNumber != 0) {
                    cout << "Resultado: " << firstNumber / secondNumber << endl;
                } else {
                    cout << "Error: División por cero." << endl;
                }
                break;
            case '%':
                if (static_cast<int>(secondNumber) != 0) {
                    cout << "Resultado: " << static_cast<int>(firstNumber) % static_cast<int>(secondNumber) << endl;
                } else {
                    cout << "Error: División por cero." << endl;
                }
                break;
            case '!':
                cout << "Factorial: " << computeFactorial(firstNumber) << endl;
                break;
            default:
                cout << "Operador no válido." << endl;
        }

        cout << "¿Desea continuar? (s/n): ";
        cin >> continueCalc;

    } while (continueCalc == 's' || continueCalc == 'S');

    return 0;
}
