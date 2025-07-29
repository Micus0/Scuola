#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// costanti
const int MAX = 20, MIN = 1;

int difficulty(char);
int number_generator();

int main () {
    char dif_choice;
    int random_number, number_chosen, max_attemps, attemps = 0;
    bool loop = true;

    // scegliere la difficoltà
    do{
        cout << "Inserire la difficolta scrivendo:\na --> facile\nb --> media\nc --> difficile\nd --> hardcore\n";
        cin >> dif_choice;
    }while((dif_choice != 'a') && (dif_choice != 'b') && (dif_choice != 'c') && (dif_choice != 'd'));

    // calcolo numero tentativi e numero randomico
    max_attemps = difficulty(dif_choice);
    random_number = number_generator();

    cout << "Hai " << max_attemps << " tentativi" << endl;

    while ((loop) && (attemps < max_attemps)) {
        // tentativo di indovinare il numero
        do {
            cout << "Inserire un numero da 1 a 20: ";
            cin >> number_chosen;
        }while((number_chosen < 1) || (number_chosen > 20));

        if (number_chosen == random_number) {
            cout << "Corretto! Hai vinto!" << endl;
            loop = false;
        }
        else if (number_chosen < random_number) {
            cout << "Sbagliato! Troppo basso!" << endl;
            attemps++;
        }
        else {
            cout << "Sbagliato! Troppo alto!" << endl;
            attemps++;
        }
    }

    if (attemps == max_attemps) {
        cout << "Numeri di tentativi esauriti! Il numero era:\n" << random_number << endl;
    }

    return 0;
}

int difficulty (char choice) {
    if (choice == 'a') {
        return 7;
    }
    else if (choice == 'b') {
        return 5;
    }
    else if (choice == 'c') {
        return 3;
    }
    else {
        return 1;
    }
}

int number_generator () {
    srand((unsigned) time(NULL));
    return rand()%(MAX - MIN + 1) + MIN;
}
