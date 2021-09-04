#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long A, B, V;
  cin >> A >> B >> V;

  long ans = ceil(double(V-B)/(A-B));

  cout << ans << '\n';
  
  return 0;
}