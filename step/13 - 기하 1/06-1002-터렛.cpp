#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int T, x1, y1, r1, x2, y2, r2;

  cin >> T;

  for(int i = 0; i < T; i++){
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    if(distance == 0){
      if(r1 == r2){ // 두 원이 일치할 때
        cout << -1 << '\n';
      } else if(r1 != r2){
        cout << 0 << '\n';
      }
    } else{
      if(distance == r1 + r2 || abs(r1-r2) == distance){
        cout << 1 << '\n';  // 두 원이 내접 또는 외접할 때
      } else if(distance > r1 + r2 || distance < abs(r1 - r2)){
        cout << 0 << '\n';  // 두 원이 만나지 않을 때,
      } else if(abs(r1 - r2) < distance && distance < r1 + r2){
        cout << 2 << '\n';
      }
    }
  }

  return 0;
}