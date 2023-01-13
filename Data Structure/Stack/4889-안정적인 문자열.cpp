#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  string in;
  int num = 1;
  cin >> in;
  while(in[0] != '-'){
    stack<char> st;
    int count = 0;
    for(int i = 0; i < in.length(); i++){
      if(in[i] == '{'){
        st.push(in[i]);
      } else if(in[i] == '}' && !st.empty()){
        if(st.top() == '{'){
          st.pop();
        } 
      } else if(st.empty()){
        count++;
        st.push('{');
      }
    }
    if(st.size() != 0){
      count += st.size()/2;
    }
    cout << num++ << ". " << count << '\n';
    cin >> in;
  }

	return 0;
}