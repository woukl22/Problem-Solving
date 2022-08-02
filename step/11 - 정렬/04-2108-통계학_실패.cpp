#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
  int arr[N];
  long count = 0;
  
  for(int i = 0; i < N; i++){
    cin >> arr[i];
    count += arr[i];
  }

  // 산술평균
  if(count == 0){
    cout << 0 << '\n';
  } else{
    cout << round(double(count)/N) << '\n';
  }

  // 중앙값
  sort(arr, arr+N);
  cout << arr[int(N/2)] << '\n';

  count = 1;  // count: 빈도수 체크
  int highCount = 0, countNum = 0;  // highCount: 가장 높은 빈도수, coutNum: 최빈값 배열에 들어갈 인덱스
  int mode[8000] = {0, }; // mode[]: 최빈값 배열
  
  for(int i = 0; i < N; i++){
    if(arr[i] == arr[i+1]){
      count++;
    } else{
      if(highCount < count){
        countNum = 0;
        highCount = count;
        mode[countNum] = arr[i];
      } else if(highCount == count){
        countNum++;
        mode[countNum] = arr[i];
      }
      count = 1;
    }
  }

  // 최빈값
  if(countNum == 0){
    cout << mode[0] << '\n';
  } else{
    cout << mode[1] << '\n';
  }

  // 범위
  int min = arr[0], max = arr[N-1];
  cout << max-min << '\n';

  return 0;
}