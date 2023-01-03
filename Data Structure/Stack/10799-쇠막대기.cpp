#include <iostream>
using namespace std;
int main() {
	string s;
  int count=0, sum=0;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '('){
      count++;
    } else if(s[i] == ')'){
      if(s[i-1] == '('){
        sum += --count;
      } else if(s[i-1] == ')'){
        sum++;
        count--;
      }
    }
  }
  cout << sum << '\n';
	return 0;
}