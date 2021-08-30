#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  char arr[N];
  int ans = 0;

  for(int i = 0; i < N; i++){
    cin >> arr[i];
    ans += int(arr[i])-48;
  }

  cout << ans << '\n';

  return 0;
}