#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string> &one, const pair<int, string> &two){
  return one.first < two.first;
}

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, age;
  string name;
  cin >> N;
  
  vector<pair<int, string>> arr;

  for(int i = 0; i < N; i++){
    cin >> age >> name;
    arr.push_back(pair<int, string>(age, name));
  }

  stable_sort(arr.begin(), arr.end(), compare);
  
  for(int i = 0; i < N; i++){
    cout << arr[i].first << " " << arr[i].second << '\n';
  }

  return 0;
}