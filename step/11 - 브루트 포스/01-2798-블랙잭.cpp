#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, M;
  int ans = 0;
  cin >> N >> M;

  int arr[N];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      int S = arr[i] + arr[j];
      for(int k = j+1; k < N; k++){
        if(ans < S + arr[k] && S + arr[k] <= M){
          ans = S + arr[k];
        }
      }
    }
  }

  cout << ans << '\n';

  return 0;
}