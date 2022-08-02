#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long A, B, C;
  long breakEvenPoint;
  cin >> A >> B >> C;
  if(B >= C){
    breakEvenPoint = -1;
  } else{
    breakEvenPoint = A/(C - B) + 1;
  }
  cout << breakEvenPoint << '\n';

  return 0;
}