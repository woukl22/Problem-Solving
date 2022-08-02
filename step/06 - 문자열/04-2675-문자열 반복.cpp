#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char S[21];
  int T, R;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> R >> S;
    for(int j = 0; j < 21; j++){
      if(S[j] == cin.eof()){
        break;
      }
      for(int k = 0; k < R; k++){
      cout << S[j];
      }
    }
    cout << '\n';
  }

  return 0;
}