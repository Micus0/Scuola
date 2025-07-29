#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int user_input();
void create_array(int[], int);
void modify_array(int[], int);
void output(int[], int);

int main () {
  int lenght = user_input();
  int vector[lenght];

  create_array(vector, lenght);
  output(vector, lenght);

  modify_array(vector, lenght);
  output(vector, lenght);

  return 0;
}

int user_input() {
  int n;

  do {
    cout << "Inserire la lunghezza dell'array (maggiore di 0): ";
    cin >> n;
  }while(n <= 0);

  return n;
}

void create_array(int v[], int l) {
  srand((unsigned) time(NULL));
  for (int i=0; i < l; i++) {
    v[i] = (rand() % 50) + 1;
  }
}

void modify_array(int v[], int l) {
  for (int i=0; i < l; i++) {
    if (v[i] % 2 == 0) {
      v[i] += 1;
    }
    else {
      v[i] -= 1;
    }
  }
}

void output(int v[], int l) {
  for (int i=0; i < l; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}
