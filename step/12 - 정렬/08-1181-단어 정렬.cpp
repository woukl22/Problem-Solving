#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  
  vector<vector<string>> arr(N, vector<string>(2));

  for(int i = 0; i < N; i++){
    cin >> arr[i][1];
    arr[i][0] = arr[i][1].length();
  }

  sort(arr.begin(), arr.end());

  for(int i = 0; i < N; i++){
    if(i+1 == N){
      cout << arr[i][1] << '\n';
    }
    else if(arr[i][1] != arr[i+1][1]){
      cout << arr[i][1] << '\n';
    }    
  }

  return 0;
}