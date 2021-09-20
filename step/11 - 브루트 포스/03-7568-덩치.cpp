#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, x, y;
  cin >> N;

  int arr[50][2], ans[50];

  for(int i = 0; i < N; i++){
    cin >> x >> y;
    arr[i][0] = x;
    arr[i][1] = y;
  }

  for(int i = 0; i < N; i++){
    ans[i] = 1;
    for(int j = 0; j < N; j++){
      if(i == j){
        continue;
      }
      if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]){
        ans[i] +=1;
      }
    }
    cout << ans[i] << " ";
  }

  cout << '\n';

  return 0;
}