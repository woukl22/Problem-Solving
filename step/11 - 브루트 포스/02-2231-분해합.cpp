#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, ans;
  cin >> N;

  for(int i = 0; i < N; i++){
    ans = i;
    string str = to_string(i);

    for(int j = 0; j < size(str); j++){
      ans += str[j]-'0';
    }
    
    if(ans == N){
      cout << i << '\n';
      break;
    } else{
      ans = 0;
    }
  }
  if(ans == 0){
    cout << ans << '\n';
  }

  return 0;
}