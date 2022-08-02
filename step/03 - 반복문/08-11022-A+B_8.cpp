#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int T;
  cin >> T;
  int sumArr[T], aArr[T], bArr[T];

  for(int i = 0; i < T; i++){
    int A, B;
    cin >> A >> B;
    sumArr[i] = A+B;
    aArr[i] = A;
    bArr[i] = B;
  }
  
  for (int i = 0; i < T; i++){
    cout << "Case #" << i+1 << ": " << aArr[i] << " + " << bArr[i] << " = " << sumArr[i] << "\n";
  }

  return 0;
}