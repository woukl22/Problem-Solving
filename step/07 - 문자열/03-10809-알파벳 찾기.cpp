#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char S[101];
  int num[26];
  cin >> S;

  for(int i = 0; i < 26; i++){
    num[i] = -1;
  }

  for(int i = 0; i < 101; i++){
    if(S[i] == cin.eof()){
      break;
    } else if(num[int(S[i])-97] == -1){
      num[int(S[i])-97] = i;
    }
  }

  for(int i = 0; i < 26; i++){
    cout << num[i] << ' ';
  }
  cout << '\n';

  return 0;
}