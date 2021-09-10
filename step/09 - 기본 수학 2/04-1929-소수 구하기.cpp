#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long M, N;
  cin >> M >> N;
  int prime[1000001];

  for(int i = 2; i <= N; i++){
    prime[i] = i;
  }

  for(int i = 2; i <= N; i++){
    for(int j = i+i; j <= N; j += i){
      if(j%i == 0){
        prime[j] = 0;
      }
    }
  }
  
  for(int i = M; i <= N; i++){
    if(prime[i] != 0){
      cout << prime[i] << '\n';
    }
  }
  return 0;
}