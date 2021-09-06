#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, count, ans;
  cin >> N;
  ans = N;

  for(int i = 0; N-i*3 >= 0; i++){
    if((N-i*3)%5 == 0){
      count = (N-i*3)/5 + i;
    } else{
      count = -1;
    }

    if(count != -1 && ans > count){
      ans = count;
    }
  }

  if(ans == N){
    ans = -1;
  }
  
  cout << ans << '\n';

  return 0;
}