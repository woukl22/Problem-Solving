#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long X;
  long count = 0;
  int check = 0;

  cin >> X;
  for(int i = 0; count < X; i++){
    count += i;
    check = i;
  }

  int row = 1, column = 1;
  if(check%2 == 1){
    column = check;
    for(int i = 1; i <= abs(X - count); i++){
      column--;
      row++;
    }
  } else if(check%2 == 0){
    row = check;
    for(int i = 1; i <= abs(X - count); i++){
      row--;
      column++;
    }
  }

  cout << row << '/' << column << '\n';
  
  return 0;
}