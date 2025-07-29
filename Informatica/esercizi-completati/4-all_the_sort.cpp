#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define MAX 9
#define MIN 1

int user_lenght();
void vector_load(int[], int);
void vector_output(int[],int);
void selection_sort(int[], int);
void insertion_sort(int[], int);
void bubble_sort(int[], int);

int main() {
    int l = user_lenght();
    int v[l];

    vector_load(v, l);

    cout << "Vettore di partenza:\n";
    vector_output(v, l);

    insertion_sort(v, l);

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

void selection_sort(int v[], int l) {
    int min = 0;
	int temp = 0;
    
    for(int i=0; i < l-1; i++) {
        min = i;

        for(int j=i+1; j < l; j++) {
			if (v[min] > v[j]) {
				min = j;
			}
        }

		temp = v[i];
		v[i] = v[min];
		v[min] = temp;
    }
}

void insertion_sort(int v[], int l) {
	int i=0, key=0;
	
	for(int j=1; j < l; j++) {
		key = v[j];
		i = j - 1;
		while((i >= 0) && (v[i] > key)) {
			v[i+1] = v[i];
			i-=1;
		}
		v[i+1] = key;
	}
}

void bubble_sort(int v[], int l) {
	bool swap=true;
	int temp=0;
	int n=l-1;

	while (swap) {
		swap=false;
		for(int i=0; i < n; i++) {
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

