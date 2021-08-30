#include <iostream>
#include <algorithm>
using namespace std;

void hanNum(int N){
  int count = 0;
  if(N < 100){
    cout << N << '\n';
  } else if (N <= 1000){
    count = 99;
    int one, two, three;
    for(int i = 100; i <= N; i++){
      one = i/100;
      two = (i - (i/100)*100)/10;
      three = i - (i/10)*10;
      if(one-two == two-three){
        count++;
      }
    }
    cout << count << '\n';
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int N;
  cin >> N;
  hanNum(N);
  
  return 0;
}