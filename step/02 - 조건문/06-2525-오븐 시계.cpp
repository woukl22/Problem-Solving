#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B;
    cin >> C;
    int t, m, p;
    if(B + C > 59){
        p = (B + C)/60;
        t = A + p;
        m = B + C - p*60;
    } else{
        t = A;
        m = B+C;
    }

    if(t > 23){
        t = t-24;
    }

    cout << t << " " << m << '\n';

    return 0;
}