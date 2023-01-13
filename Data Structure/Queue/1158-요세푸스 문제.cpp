#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  int N, K;
  int count = 1;
  queue<int> q;
  cin >> N >> K;
  cout << '<';

  for(int i = 1; i <= N; i++){
    if(K == 1){
      if(i != N){
        cout << i << ", ";
      } else{
        cout << i << '>';
        return 0;
      }
    } else{
      if(count == K){
        count = 1;
        cout << i << ", ";
      } else{
        q.push(i);
        count++;
      }  
    }
  }

  while(q.size() > 1 && !q.empty()){
    if(count == K){
      cout << q.front() << ", ";
      q.pop();
      count = 1;
    } else{
      q.push(q.front());
      q.pop();
      count++;
    }
  }
  cout << q.front() << '>' << '\n';

	return 0;
}