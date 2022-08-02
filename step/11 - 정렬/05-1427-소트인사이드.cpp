#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string N;
  cin >> N;
  int count[10] = {0, };

  for(int i = 0; i < N.length(); i++){
    count[int(N[i]-'0')]++;
  }

  for(int i = 9; i >= 0; i--){
    for(int j = 0; count[i] != 0; count[i]--){
      cout << i;
    }
  }

  return 0;
}