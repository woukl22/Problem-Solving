#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int N;
  cin >> N;
  int arr[N];

  for(int i = 0; i < N; i++){
    int A, B;
    cin >> A >> B;
    arr[i] = A+B;
  }
  
  for (int i : arr){
    cout << i << endl;
  }

  return 0;
}