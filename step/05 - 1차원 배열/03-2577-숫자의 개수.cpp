#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  int num[10] = {0,};

  cin >> A >> B >> C;
  int x = A * B * C;
  
  for (int i = 0; i < 10 ; i++){
    if((int)to_string(x)[i]-48 == 0)
      num[0]++;
    else if((int)to_string(x)[i]-48 == 1)
      num[1]++;
    else if((int)to_string(x)[i]-48 == 2)
      num[2]++;
    else if((int)to_string(x)[i]-48 == 3)
      num[3]++;
    else if((int)to_string(x)[i]-48 == 4)
      num[4]++;
    else if((int)to_string(x)[i]-48 == 5)
      num[5]++;
    else if((int)to_string(x)[i]-48 == 6)
      num[6]++;
    else if((int)to_string(x)[i]-48 == 7)
      num[7]++;
    else if((int)to_string(x)[i]-48 == 8)
      num[8]++;
    else if((int)to_string(x)[i]-48 == 9)
      num[9]++;
  }

  for(int i = 0; i < 10; i++) {
    cout << num[i] << '\n';
  }

  return 0;
}