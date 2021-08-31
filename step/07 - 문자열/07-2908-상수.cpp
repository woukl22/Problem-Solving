#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int A, B;
  cin >> A >> B;
  int A_one, A_two, A_three;
  int B_one, B_two, B_three;

  A_one = A/100;
  A_two = (A - (A/100)*100)/10;
  A_three = A - (A/10)*10;

  B_one = B/100;
  B_two = (B - (B/100)*100)/10;
  B_three = B - (B/10)*10;

  A = A_three*100 + A_two*10 + A_one;
  B = B_three*100 + B_two*10 + B_one;

  if(A >= B){
    cout << A << '\n';
  } else {
    cout << B << '\n';
  }
  return 0;
}