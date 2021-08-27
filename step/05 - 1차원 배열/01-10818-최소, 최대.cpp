#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, max, min;
  cin >> N;
  int arr[N];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }
  max = arr[0];
  min = arr[0];
  for(int i = 0; i < N; i++){
    if(max < arr[i]){
      max = arr[i];
    }
    if(min > arr[i]){
      min = arr[i];
    }
  }
  cout << min << " " << max << '\n';

  return 0;
}