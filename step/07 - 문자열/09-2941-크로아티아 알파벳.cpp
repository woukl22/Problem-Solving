#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char alphabet[101];
  int num = 0;
  cin >> alphabet;

  for(int i = 0; i < 100; i++){
    if(alphabet[i] == cin.eof()){
      break;
    }
    if(alphabet[i] == 'c' && (alphabet[i+1] == '=' || alphabet[i+1] == '-')){
      num++;
      i++;
      continue;
    }
    else if(alphabet[i] == 'd'){
      if(alphabet[i+1] == 'z' && alphabet[i+2] == '='){
        num++;
        i += 2;
      }
      else if(alphabet[i+1] == '-'){
        num++;
        i++;
      } else {
        num++;
      }
      continue;
    }
    else if((alphabet[i] == 'l' || alphabet[i] == 'n') && alphabet[i+1] == 'j'){
      num++;
      i++;
      continue;
    }
    else if((alphabet[i] == 's' || alphabet[i] == 'z') && alphabet[i+1] == '='){
      num++;
      i++;
      continue;
    }
    num++;
  }

  cout << num << '\n';
  return 0;
}