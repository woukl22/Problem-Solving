#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  int arr[N];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  sort(arr, arr+N);
  for(int i = 0; i < N; i++){
    cout << arr[i] << '\n';
  }

  return 0;
}