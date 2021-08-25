#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  double a, b;
  cin >> a >> b;

  cout.precision(10);
  cout << fixed;
  cout << a/b << endl;
  return 0;
}