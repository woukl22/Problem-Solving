#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, M;
  double average = 0;
  int max = 0;
  cin >> N;
  double arr[N];

  for (int i = 0; i < N; i++){
    cin >> arr[i];
    if(arr[i] > max){
      max = arr[i];
    }
  }

  for (int i = 0; i < N; i++){
    arr[i] = arr[i]/max*100.0;
    average += arr[i];
  }

  cout.setf(ios::fixed);
  cout.precision(2);
  cout << double(average/N) << '\n';

  return 0;
}