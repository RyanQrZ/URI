#include <iostream>
using namespace std;
int main(){

    int x, y, c;

    cin >> x;
    cin >> y;

    if(x < y){
        for(c=x+1; c<y; c++){
            if(c%5 == 2 || c%5 == 3){
                cout << c << endl;
            }
        }
    }
    else if(x > y){
        for(c=y+1; c<x; c++){
            if(c%5 == 2 || c%5 == 3){
                cout << c << endl;
            }
        }
    }

    return 0;
}
