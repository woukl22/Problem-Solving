#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int arr[9];
  int index = 0;
  int max = 0;

  for(int i = 0; i < 9; i++){
    cin >> arr[i];
    if(max < arr[i]){
      max = arr[i];
      index = i+1;
    }
  }

  cout << max << '\n';
  cout << index << '\n';

  return 0;
}