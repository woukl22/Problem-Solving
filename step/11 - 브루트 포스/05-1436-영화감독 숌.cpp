#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  long N, ans;
  int count = 0;
  cin >> N;

  for(long i = 666; N != count; i++){
    string num = to_string(i);
    for(int j = 0; j < num.length()-2; j++){
      if(int(num[j]-'0') == 6 && int(num[j+2]-'0') == 6 && int(num[j+1]-'0') == 6){
        ans = i;
        count++;
        break;
      }
    }
  }
  cout << ans << '\n';

  return 0;
}