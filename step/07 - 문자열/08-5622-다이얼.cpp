#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  char dial[16];
  int count = 0;
  cin >> dial;

  for(int i = 0; i < 16; i++){
    if(dial[i] == cin.eof()){
      break;
    }
    else if(dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C'){
      count += 3;
    }
    else if(dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F'){
      count += 4;
    }
    else if(dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I'){
      count += 5;
    }
    else if(dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L'){
      count += 6;
    }
    else if(dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O'){
      count += 7;
    }
    else if(dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S'){
      count += 8;
    }
    else if(dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V'){
      count += 9;
    }
    else if(dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z'){
      count += 10;
    }
  }

  cout << count << '\n';
  return 0;
}