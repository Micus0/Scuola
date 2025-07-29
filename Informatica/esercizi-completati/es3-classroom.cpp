#include <iostream>
using namespace std;

void a () {
  for (int i=1; i <= 20; i++) {
    cout << i << endl;
  }
}

void b () {
  for (int i=1; i <= 20; i++) {
    if (i % 2 == 0) {
      cout << i << endl;
    }
  }
}

void c () {
  for (int i=1; i <= 20; i++) {
    if (i % 2 != 0) {
      cout << i << endl;
    }
  }
}


int main () {
  char user_input;
  bool loop = true;

  while (loop) {

    cout << "Inserire una procedura tra le seguenti: a, b, c" << endl;
    cin >> user_input;
    
    switch (user_input) {
      case 'a':
        a();
        loop = false;
        break;
      
      case 'b':
        b();
        loop = false;
        break;

      case 'c':
        c();
        loop = false;
        break;
    
      default:
        break;
    }
  }
  
  return 0;
}