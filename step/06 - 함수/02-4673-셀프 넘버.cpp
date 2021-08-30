#include <iostream>
#include <algorithm>
using namespace std;

int d(int n){
  if(n < 10){
    n = n + n;
  } else if(n < 100){
    n = n + n/10 + n-(n/10)*10;
  } else if(n < 1000){
    n = n + (n/100) + (n-(n/100)*100)/10 + (n-(n/10)*10);
  } else if(n < 10000){
    n = n + (n/1000) + (n-(n/1000)*1000)/100 + (n-(n/100)*100)/10 + (n-(n/10)*10);
  }
  return n;
}

void self_number(){
  int dn[10000];
  int sn[10000];
  int i;
  for(i = 0; i < 10000; i++){
    dn[i] = d(i);
    if(dn[i] > 10050){
      break;
    }
  }
  sort(dn, dn+10000);
  i = 0;
  int selfNumCount = 1, count = 0;
  while(dn[i] < 10000){
    if(selfNumCount < dn[i]){
      sn[count] = selfNumCount;
      selfNumCount++;
      cout << sn[count] << '\n';
      count++;
    }
    else if(selfNumCount == dn[i]){
      i++;
      selfNumCount++;
      continue;
    } else{
      i++;
    }
  }
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  self_number();
  
  return 0;
}