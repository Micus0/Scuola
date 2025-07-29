#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void v_loading(int[], int);
int is_sum(int[], int, bool);

int main() {
  int l = 10;
  int v[l];
  int multy_even = 0, sum_odd = 0;

  v_loading(v, l);

  cout << "Vettore:" << endl;
  for(int i=0; i < l; i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  sum_odd = is_sum(v, l, true);
  multy_even = is_sum(v, l, false);

  cout << "Moliplicazione elementi con indice pari: " << multy_even << endl;
  cout << "Somma elementi con indice dispari: " << sum_odd << endl;

  return 0;
}

void v_loading(int v[], int l) {
  srand((unsigned) (time(NULL)));
  for (int i=0; i < l; i++) {
    v[i] = (rand() % 10) + 2;
  }
}

int is_sum(int v[], int l, bool is_sum) {
  int sum_or_multy = 0;

  if (is_sum) {
    for (int i=0; i < l; i++) {
      if (i % 2 == 0) {
        sum_or_multy += v[i];
      }
    }
  }
  else {
    sum_or_multy = 1;
    
    for (int i=0; i < l; i++) {
      if (i % 2 != 0) {
        sum_or_multy *= v[i];
      }
    }
  }

  return sum_or_multy;
}
