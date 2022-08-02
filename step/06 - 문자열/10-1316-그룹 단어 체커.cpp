#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  string group[N];
  char str[101];
  int num = 0;

  for(int i = 0; i < N; i++){
    int checker[26] = {0, };
    int check = 0;
    
    cin >> group[i];
    strcpy(str, group[i].c_str());

    for(int j = 0; j < group[i].length(); j++){
      if(checker[int(str[j])-97] == 2){
        check = 1;
        break;
      } else {
        if(int(str[j] == int(str[j+1]))){
          checker[int(str[j])-97] = 1;
        } else{
          checker[int(str[j])-97] = 2;
        }
      }
    }
    if(check == 0){
      num++;
    }
  }

  cout << num << '\n';
  return 0;
}