#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int x, y, w, h, min;
  cin >> x >> y >> w >> h;

  min = x;
  if(min > y){
    min = y;
  }
  if(min > w - x){
    min = w - x;
  }
  if(min > h - y){
    min = h - y;
  }

  cout << min << '\n';    

  return 0;
}