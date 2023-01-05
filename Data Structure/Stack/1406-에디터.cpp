#include <iostream>
#include <list>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  string N, C;
  int M;
	cin >> N;
  cin >> M;
  
  list<char> s;  
  for(int i = 0; i < N.size(); i++){
    s.push_back(N[i]);
  }
  list<char>::iterator cursor = s.end();
  
  for(int i = 0; i <= M; i++){
    getline(cin, C);
    if(C[0] == 'L' && cursor != s.begin()){
      cursor--;
    } else if(C[0] == 'D' && cursor != s.end()){
      cursor++;
    } else if(C[0] == 'B' && cursor != s.begin()){
      cursor--;
      cursor = s.erase(cursor);
    } else if(C[0] == 'P'){
      s.insert(cursor, C[2]);
    }
  }
  for(char ss : s)
    cout << ss;
	return 0;
}