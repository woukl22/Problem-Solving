#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<int> arr(N), ans(N);
  for(int i = 0; i < N; i++){
    cin >> arr[i];
    ans[i] = arr[i];
  }

  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(), arr.end()), arr.end());

  for(int i = 0; i < N; i++){
    int j = lower_bound(arr.begin(), arr.end(), ans[i]) - arr.begin();
    cout << j << " ";
  }

  return 0;
}