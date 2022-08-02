#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int C, N;
  cin >> C;
  
  for (int i = 0; i < C; i++){
    int count = 0, sum = 0;
    cin >> N;
    int score[N];
    
    for(int j = 0; j < N; j++){
      cin >> score[j];
      sum += score[j];
    }

    for(int j = 0; j < N; j++){
      if(sum/double(N) < score[j]){
        count++;
      }
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << double(count)/N*100 << '%' << '\n';
  }

  return 0;
}