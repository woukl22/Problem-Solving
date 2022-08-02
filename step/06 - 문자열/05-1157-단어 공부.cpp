#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char S[1000000];
  int alphabet[27] = {0,};
  int max=-1, count=0;
  cin >> S;
  
  for (int i = 0; i < 1000000; i++){
    if(S[i] == cin.eof()){
      break;
    }
    if(int(S[i]) > 96){
      alphabet[int(S[i]) - 97]++;
    } else {
      alphabet[int(S[i]) - 65]++; 
    }
  }
  
  for(int i = 0; i < 26; i++){
    if (alphabet[i] > count){
      count = alphabet[i];
      max = i;
    } else if(alphabet[i] == count){
      count = alphabet[i];
      max = -1;
    }
  }

  if(max == -1){
    cout << "?" << '\n';
  } else {
    cout << char(max+65) << '\n';
  }
  
  return 0;
}

