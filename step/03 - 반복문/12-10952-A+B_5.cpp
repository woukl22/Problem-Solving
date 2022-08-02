#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int A = -1, B = -1;

  while(A != 0 && B != 0) {
    cin >> A >> B;
    if(A != 0 && B != 0){
      cout << A + B << endl;
    }
  }

  return 0;
}