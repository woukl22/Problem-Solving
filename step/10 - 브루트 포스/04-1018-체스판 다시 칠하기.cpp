#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int M, N;
  int count = 0, check = 64, ans=64, odd_count = 0, even_count = 0;
  cin >> N >> M;
  char arr[N][M];

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> arr[i][j];
    }
  }

  for(int i = 0; i < N-7; i++){
    for(int j = 0; j < M-7; j++){
      for(int row = 0; row < 8; row++){
        for(int column = 0; column < 8; column++){
          if((column%2 == 0 && row%2 == 0 && arr[row+i][column+j] == 'W') || (column%2 == 1 && row%2 == 1 && arr[row+i][column+j] == 'W') || (column%2 == 1 && row%2 == 0 && arr[row+i][column+j] == 'B') || (column%2 == 0 && row%2 == 1 && arr[row+i][column+j] == 'B')){
            even_count++;
          } else if((column%2 == 0 && row%2 == 0 && arr[row+i][column+j] == 'B') || (column%2 == 1 && row%2 == 1 && arr[row+i][column+j] == 'B') || (column%2 == 1 && row%2 == 0 && arr[row+i][column+j] == 'W') || (column%2 == 0 && row%2 == 1 && arr[row+i][column+j] == 'W')){
            odd_count++;
          }
        }
      }
      if(odd_count >= even_count){
        check = 64-odd_count;
      } else{
        check = 64-even_count;
      }
      if(ans > check){
        ans = check;
      }
      odd_count = 0;
      even_count = 0;
    }
  }

  cout << ans << '\n';
  
  return 0;
}