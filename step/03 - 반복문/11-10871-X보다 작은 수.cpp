#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int N, X;
  cin >> N >> X;

  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  for(int i = 0; i < N; i++){
    if(A[i] < X){
      cout << A[i] << " ";
    }
  }

  return 0;
}