#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int input;
  int count = 0;
  int inputNum[10];

  for(int i = 0; i < 10; i++){
    cin >> input;
    inputNum[i] = input%42;

    if(count == 0){
      count++;
    }

    for(int j = 0; j < i; j++){
      if(inputNum[i] == inputNum[j]){
        break;
      } else if(j == i-1){
        count++;
      }
    }
  }

  cout << count << '\n';

  return 0;
}