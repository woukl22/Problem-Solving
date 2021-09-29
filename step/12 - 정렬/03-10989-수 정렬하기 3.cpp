#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  int input;
  int countArr[10001] = {0, };
  
  for(int i = 0; i < N; i++){
    cin >> input;
    countArr[input]++;
  }

  for(int i = 0; i < 10001;){
    if(countArr[i] != 0){
      countArr[i]--;
      cout << i << '\n';
    } else if(countArr[i] == 0){
      i++;
    }
  }

  return 0;
}