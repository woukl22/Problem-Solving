#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;
  int result[num];
  string ox;

  for(int i = 0; i < num; i++){
    int j = 0;
    int count = 1;
    result[i] = 0;
    
    cin >> ox;
    
    while(ox[j] == 'O' || ox[j] == 'X'){
      if(ox[j] == 'O'){
        result[i] += count;
        count++;
      } else if(ox[j] == 'X'){
        count = 1;
      }
      j++;
    }
  }

  for(int i = 0; i < num; i++){
    cout << result[i] << '\n';
  }  

  return 0;
}