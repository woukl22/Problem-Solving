#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  
  for(int i = 2; N != 1; i++){
    if(N != 1){
      if(N%i == 0){
        cout << i << '\n';
        N = N/i;
        i = 1;
      }
    }
  }

  return 0;
}