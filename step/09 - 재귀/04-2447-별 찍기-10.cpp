#include <iostream>
using namespace std;

void star(int N, int row, int column){
  if(row%3 == 1 && column%3 == 1){
    cout << " ";
  }
  else if(N/3 == 0){
    cout << "*";
  }
  else{
    star(N/3, row/3, column/3);
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  for(int row = 0; row < N; row++){
    for(int column = 0; column < N; column++){
      star(N, row, column);
    }
    cout << '\n';
  }

  return 0;
}