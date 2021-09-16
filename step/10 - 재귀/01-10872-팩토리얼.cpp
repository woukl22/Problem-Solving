#include <iostream>
using namespace std;

int factorial(int num){
  if(num == 0){
    return 1;
  } else{
    return num*factorial(num-1);
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, ans;
  cin >> N;

  ans = factorial(N);

  cout << ans << '\n';

  return 0;
}