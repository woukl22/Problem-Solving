#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for(int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << '\n';
  }
  return 0;
}