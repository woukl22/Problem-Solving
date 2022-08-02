#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  double R, euclidean_circle, taxi_circle;
  const double PI = 3.14159265358979;

  cin >> R;
  euclidean_circle = R*R*PI;
  taxi_circle = R*R*2;

  cout << fixed;
  cout.precision(6);
  cout << euclidean_circle << '\n';
  cout << taxi_circle << '\n';
  
  return 0;
}