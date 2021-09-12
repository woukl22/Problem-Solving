#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a = -1, b = -1, c = -1;
  
  for(int i = 0; ; i++){
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0){
      break;
    }

    if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
      cout << "right" << '\n';
    } else{
      cout << "wrong" << '\n';
    }
  }
  
  return 0;
}