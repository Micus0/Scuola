#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX 10
#define MIN 1

int lenght_input();
int element_input();
void vector_load(int[], int);
void vector_output(int[], int);
void sorting(int[], int);
int count_query(int[], int, int);


int main () {
    int lenght=0;
    int n_founds;
    int element;
    lenght = lenght_input();

    int v[lenght];

    vector_load(v, lenght);

    cout << "Vettore non ordinato:\n";
    vector_output(v, lenght);

    sorting(v, lenght);

    cout << "Vettore ordinato:\n";
    vector_output(v, lenght);

    while(true) {
        element = element_input();

        if (element >= MIN && element <= MAX) {
            n_founds = count_query(v, lenght, element);

            cout << "Numero elementi trovati: " << n_founds << endl;
        }else {
            break;
        }
    }


    return 0;
}


// Richiesta in ingresso della lunghezza del vettore
int lenght_input() {
    int n;

    do {
        cout << "Inserire la dimensione del vettore (N>0 N<=50): ";
        cin >> n;
    }while((n<=0) || (n > 50));

    return n;
}

int element_input() {
    int n;

    cout << "Inserire elemento da cercare all'interno del vettore (da " << MIN << " a " << MAX << "): ";
    cin >> n;

    return n;
}

// Caricamento del vettore usando numeri casuali
void vector_load(int v[], int l) {
    srand(time(NULL));

    for(int i=0; i < l; i++) {
        v[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }
}

// Stampa del vettore
void vector_output(int v[], int l) {
    if (l != 0) {
        // Se ci sono elementi all'interno del vettore
        for(int i=0; i < l; i++) {
            cout << v[i] << " ";
        }
    }
    else {
        // Se non ci sono elementi all'interno del vettore
        cout << "Nessun elemento presente nel vettore.";
    }

    cout << endl;
}

// Ordinamento del vettore utlizzando il bubble sort
void sorting(int v[], int l) {
    bool swap=true;
    int temp=0;
    int n=l-1;

    while (swap) {
        swap=false;
        for (int i=0; i < n; i++) {
            if (v[i] > v[i+1]) {
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                swap=true;
            }
        }
        n--;
    }
}

int count_query(int v[], int l, int n) {
    int count = 0;

    for(int i=0; i < l; i++) {
        if(v[i] == n) {
            count++;
        }
    }

    return count;
}
