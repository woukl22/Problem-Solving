#include <iostream>
using namespace std;

int fibonacci(int N, int count, int first, int second){
  if(N == 0){
    return 0;
  } else if(N == 1){
    return 1;
  }

  if(N == count){
    return first+second;
  } else{
    return fibonacci(N, count+1, second, first+second);
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, ans;
  cin >> N;

  ans = fibonacci(N, 2, 0, 1);

  cout << ans << '\n';

  return 0;
}