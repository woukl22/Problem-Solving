#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long n;
  int prime[1000001];
  
  do{
    cin >> n;
    if(n == 0){
      break;
    }
    int count = 0;

    for(int i = 2; i <= 2*n; i++){
      prime[i] = i;
    }
    for(int i = 2; i <= 2*n; i++){
      for(int j = i+i; j <= 2*n; j += i){
        if(j%i == 0){
          prime[j] = 0;
        }
      }
    }
    for(int i = n+1; i <= 2*n; i++){
      if(prime[i] != 0){
        count++;
      }
    }
    cout << count << '\n';
  }while(n != 0);

  return 0;
}