#include <iostream>
using namespace std;

void somma(int n1, int n2) {
  int s;
  s = n1 + n2;
  cout << s << endl;
}

int main (){
  somma(2, 3);
  somma(2, 5);

  return 0;
}
