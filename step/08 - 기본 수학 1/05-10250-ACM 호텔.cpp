#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int T, H, W, N;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> H >> W >> N;
    if(N%H == 0){
      int ans = H*100 + N/H;
      cout << ans << '\n';
    } else {
      int ans = N%H*100 + N/H + 1;
      cout << ans << '\n';
    }
  }
  
  return 0;
}
