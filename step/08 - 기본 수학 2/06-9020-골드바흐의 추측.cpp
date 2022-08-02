#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long T, n;
  int prime[10001];
  cin >> T;

  for(int k = 0; k < T; k++){
    cin >> n;
    int partition[2] = {0, 0};
    int check = 0;

    for(int i = 2; i <= n; i++){
      prime[i] = i;
    }
    for(int i = 2; i <= n; i++){
      for(int j = i+i; j <= n; j += i){
        if(j%i == 0){
          prime[j] = 0;
        }
      }
    }
    for(int i = n/2; i >1; i--){
      if(i != 2 && i%2 == 0){
        continue;
      }
      for(int j = n/2; j <= n-prime[i]; j++){
        if(n-prime[i] == prime[j]){
          partition[0] = i;
          partition[1] = j;
          check = 1;
        }
      }
      if(check == 1){
        check = 0;
        break;
      }

    }
    cout << partition[0] << ' ' << partition[1] << '\n';
  }

  return 0;
}