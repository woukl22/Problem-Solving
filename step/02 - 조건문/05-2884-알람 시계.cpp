#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int H, M;
  cin >> H >> M;

  if (M - 45 < 0) {
    if (H == 0) {
      H = 23;
    } else {
      H -= 1;
    }
    M += 15;
  } else {
    M -= 45;
  }
  
  cout << H << " " << M << endl;
  return 0;
}