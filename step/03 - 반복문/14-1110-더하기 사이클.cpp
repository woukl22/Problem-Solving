#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, one, two;
  int result = -1;
  int cycle = 0;

  cin >> N;
  result = N;

  do {
    one = N/10;
    two = N - one*10;
    N = one+two;

    if(N >= 10) {
      N = N - (N/10)*10;
    }

    N = two*10 + N;
    cycle++;
  } while(result != N);
  
  cout << cycle << '\n';

  return 0;
}