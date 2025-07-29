#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lenght_input();
void vector_loading(int[], int, int, int);
void vector_sum(int[], int[], int[], int);
void vector_sub(int[], int[], int[], int);
void vector_output(int[], int);

int main() {
  int lenght = lenght_input();
  int v1[lenght], v2[lenght], sum[lenght], sub[lenght];

  vector_loading(v1, lenght, 51, 100);
  vector_loading(v2, lenght, 1, 20);

  cout << "Primo vettore:\n";
  vector_output(v1, lenght);
  cout << "Secondo vettore:\n";
  vector_output(v2, lenght);
  cout << endl;

  vector_sum(v1, v2, sum, lenght);
  vector_sub(v1, v2, sub, lenght);

  cout << "Somma dei vettori:\n";
  vector_output(sum, lenght);
  cout << "Differenza dei vettori\n";
  vector_output(sub, lenght);
}

int lenght_input() {
  int n;

  do {
    cout << "Inserire la lunghezza dei vettori (0 < N <= 50): ";
    cin >> n;
  }while(n <= 0 || n > 50);

  return n;
}

void vector_loading(int v[], int l, int min, int max) {
  srand((unsigned) time(NULL));
  for(int i=0; i < l; i++) {
    v[i] = (rand() % (max - min + 1)) + min;
  }
}

void vector_sum(int v1[], int v2[], int sum[], int l) {
  for(int i=0; i < l; i++) {
    sum[i] = v1[i] + v2[i];
  }
}

void vector_sub(int v1[], int v2[], int sub[], int l) {
  for(int i=0; i < l; i++) {
    sub[i] = v1[i] - v2[i];
  }
}

void vector_output(int v[], int l) {
  for(int i=0; i < l; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}