#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int N;
  cin >> N;
  int arr[N];

  for(int i = 0; i < N; i++){
    int A, B;
    cin >> A >> B;
    arr[i] = A+B;
  }
  
  for (int i : arr){
    cout << i << "\n";
  }

  return 0;
}