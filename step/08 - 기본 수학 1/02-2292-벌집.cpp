#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long N;
  long count = 1;
  cin >> N;

  if(N == 1){
    cout << 1 << '\n';
  }
  
  for(int i = 0; count + 6*i < N; i++){
    count += 6*i;
    if(count+6*(i+1) >= N){
      cout << i+2 << '\n';
    }
  }
  
  return 0;
}