#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string A, B;
  string C = "";
  int count = 0;
  cin >> A >> B;

  if(A.length() != B.length()){
    int diff = A.length() - B.length();
    if(A.length() > B.length()){
      for(int i = 0; i < diff; i++){
        B.insert(0, "0");
      }
    }
    else if(A.length() < B.length()){
      for(int i = 0; i < -1*diff; i++){
        A.insert(0, "0");
      }
    }
  }

  for(int i = 0; A.length() != 0; i++){
    int c = A.back()-'0' + B.back()-'0';
    if(count == 1){
      c += 1;
    }

    if(c > 9){
      c -= 10;
      count = 1;
    } else {
      count = 0;
    }
    C.insert(0, to_string(c));
    A.pop_back();
    B.pop_back();
  }
  if(count == 1){
    C.insert(0, "1");
  }

  cout << C << '\n';

  return 0;
}