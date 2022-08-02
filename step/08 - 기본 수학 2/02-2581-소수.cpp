#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int M, N, min;
  int count = 0, check = 0, sum = 0;
  cin >> M >> N;

  for(int i = M; i <= N; i++){
    if(i != 1){
      for(int j = 2; j < i; j++){
        if(i%j == 0){
          check = 1;
          break;
        }
      }
      if(check == 0){
        count++;
        if(count == 1){
          min = i;
        }
        sum += i;
      }
      check = 0;
    }
  }
  if(count == 0){
    cout << -1 << '\n';
  } else{
    cout << sum << '\n';
    cout << min << '\n';
  }
  
  return 0;
}