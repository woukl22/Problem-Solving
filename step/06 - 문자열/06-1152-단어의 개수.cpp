#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char S[1000001];
  int count=0;
  cin.getline(S, 1000001);

  for (int i = 0; i < 1000000; i++){
    // 첫 글자
    if (i == 0 && S[i] == ' '){
      continue;
    }
    else if (i == 0 && S[i] != ' '){
      count++;
    }

    // 마지막 글자
    if(S[i] == cin.eof()){
      // if (S[i-1] != ' '){
      //   count++;
      // }
      break;
    } 
  
    // S[i]가 공백이 아닐 때
    else if(S[i] != ' '){
      if(S[i-1] == ' '){
        count++;
      }
    }
  }

  cout << count << '\n';

  return 0;
}