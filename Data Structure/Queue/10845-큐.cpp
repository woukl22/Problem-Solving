#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  int N, p;
  string s;
  queue<int> q;
  
  cin >> N;
  
  for(int i = 0; i <= N; i++){
    getline(cin, s);
    if(s.substr(0, 4) == "push"){
      p = stoi(s.substr(5));
      q.push(p);
    } else if(s == "pop"){
      if(!q.empty()){
        cout << q.front() << '\n';
        q.pop();
      } else{
        cout << "-1" << '\n';
      }
    } else if(s == "size"){
      cout << q.size() << '\n';
    } else if(s == "empty"){
      cout << (int)q.empty() << '\n';
    } else if(s == "front"){
      if(!q.empty())
        cout << q.front() << '\n';
      else
        cout << "-1" << '\n';
    } else if(s == "back"){
      if(!q.empty())
        cout << q.back() << '\n';
      else
        cout << "-1" << '\n';
    }
  }
  
  return 0;
}