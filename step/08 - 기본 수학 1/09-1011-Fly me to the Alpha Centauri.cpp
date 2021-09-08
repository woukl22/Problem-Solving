#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long T, x, y;
  cin >> T;

  for(int n = 0; n < T; n++){
    cin >> x >> y;
    long ans = 0;
    long distance = y - x;
    long count = 1, check = 1;
    for(int i = 0; ans == 0; i++){
      if(count%2 == 1){
        if(distance <= check*check){
          ans = count;
        } else{
          count++;
        }
      } else {
        if(distance <= check*(check+1)){
          ans = count;
        } else{
          check++;
          count++;
        }
      } 
    }
    cout << ans << '\n';
  }
  return 0;
}