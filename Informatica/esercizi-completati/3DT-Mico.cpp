#include <iostream>
#include <ctime> // Per genererare numero randomico
#include <cstdlib> // Per genererare numero randomico
using namespace std;

// Prototipi
void user_input(int&); // Procedura per inserire il numero in input
int random_number(); // Funzione per creare un numero randomico
int multiplication(int, int); // Funzione per moltiplicare i due numeri
void result_output(int, int, int); // Procedura per stampare il risultato

int main () {
    int user_number, multiplier, result; // Dichiarazione variabili

    // Assegnamento valori alle variabili
    user_input(user_number); // Cambio valore di user_number by reference
    multiplier = random_number();
    result = multiplication(user_number, multiplier);

    // Chiamata di result_output per stampare il risultato
    result_output(user_number, multiplier, result);

    return 0;
}

// Funzioni
void user_input(int &n) {
    do {
        cout << "Inserire un numero maggiore di 0: ";
        cin >> n;
    }while(n <= 0);
}

int random_number() {
    srand((unsigned) time(NULL));
    return ((rand() % (20 - 10)) + 10); // 21 � il massimo valore + 1 e 10 � il minimo valore
}

int multiplication(int n, int m) {
    int result=0;

    // Uso del for per ripetere la somma in base al numero casuale
    for (int i=0; i < m; i++) {
        result += n;
    }

    return result;
}

void result_output(int n, int m, int result) {
    cout << n << " * " << m << " = " << result;
}
