#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int a, b, c, d, e;
  cin >> a >> b;

  c = b/100;
  d = (b-c*100)/10;
  e = b-c*100-d*10;

  cout << a*e << endl;
  cout << a*d << endl;
  cout << a*c << endl;
  cout << a*b << endl;
  return 0;
}