#include <iostream>

using namespace std;

int main(){
    int one, two, three, reward;
    cin >> one >> two >> three;
    if(one == two && one == three){
        reward = 10000 + 1000*one;
    } else if((one == two && one != three) || (one != two && one == three) || (one != two && two == three)){
        if(one == two || one == three){
            reward = 1000 + 100*one;
        } else{
            reward = 1000 + 100*two;
        }
    } else {
        if(one > two && one > three){
            reward = 100*one;
        } else if(two > one && two > three){
            reward = 100*two;
        } else{
            reward = 100*three;
        }
    }

    cout << reward << '\n';
    return 0;
}