#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int n, nSum;
  cin >> n;
  nSum = 0;

  for(int i = 1; i <= n; i++){
    nSum += i;
  }
  cout << nSum << endl;
  
  return 0;
}