#include <iostream>
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

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N-i-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for(int i = 0; i < N; i++){
    cout << arr[i] << '\n';
  }

  return 0;
}