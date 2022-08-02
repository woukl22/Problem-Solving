#include <iostream>
using namespace std;

int kn(int a, int b){
  int sum = 0;
  if(b == 1){
    return 1;
  } else if(a == 0){
    return b;
  } else{
    return kn(a-1, b) + kn(a, b-1);
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  for(int i = 0; i < T; i++){
    int k, n;
    cin >> k;
    cin >> n;

    cout << kn(k, n) << '\n';
  }
  return 0;
}