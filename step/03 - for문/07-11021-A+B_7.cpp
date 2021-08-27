#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int T;
  cin >> T;
  int arr[T];

  for(int i = 0; i < T; i++){
    int A, B;
    cin >> A >> B;
    arr[i] = A+B;
  }
  
  for (int i = 1; i <= T; i++){
    cout << "Case #" << i << ": " << arr[i-1] << "\n";
  }

  return 0;
}