#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int N, int start, int middle, int end){
  if(N <= 1){
    cout << start << " " << end << '\n';
  } else{
    hanoi(N-1, start, end, middle);
    cout << start << " " << end << '\n';
    hanoi(N-1, middle, start, end);
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, ans;
  cin >> N;
  ans = pow(2, N) - 1;

  cout << ans << '\n';
  hanoi(N, 1, 2, 3);  

  return 0;
}