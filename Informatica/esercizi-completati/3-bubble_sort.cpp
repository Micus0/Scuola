#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX 9
#define MIN 1

int user_lenght();
void vector_load(int[], int);
void vector_output(int[],int);
void vector_sorting(int[], int);

int main() {
    int l = user_lenght();
    int v[l];

    vector_load(v, l);

    cout << "Vettore di partenza:\n";
    vector_output(v, l);

    vector_sorting(v, l);

    cout << "Vettore ordinato:\n";
    vector_output(v, l);


    return 0;
}


int user_lenght() {
    int n;

    do {
        cout << "Inserire la lunghezza del vettore (0 < N <= 20): ";
        cin >> n;
    }while(n <= 0 || n > 20);

    return n;

}

void vector_load(int v[], int l) {
    srand((unsigned) time(NULL));
    for(int i=0; i < l; i++) {
        v[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }
}

void vector_output(int v[], int l) {
    for(int i=0; i < l; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void vector_sorting(int v[], int l) {
    bool swap = true;
    int n = l - 1;
    int key;

    while(swap) {
        swap = false;

        for(int j = 0; j < n; j++) {
            if(v[j] > v[j+1]) {
                key = v[j];
                v[j] = v[j+1];
                v[j+1] = key;
                swap = true;
            }
        }
        n -= 1;
    }
}
