#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, x;
  int count = 0, check = 0;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> x;
    if(x != 1){
      for(int j = 2; j < x; j++){
        if(x%j == 0){
          check = 1;
          break;
        }
      }
      if(check == 0){
        count++;
      }
    check = 0;
    }
  }

  cout << count << '\n';
  return 0;
}