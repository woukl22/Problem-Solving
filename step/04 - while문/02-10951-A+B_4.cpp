#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int A, B;

  while(cin >> A >> B) {
    cout << A + B << '\n';
  }

  return 0;
}