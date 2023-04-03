#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i != 10; i++){
        if (i == 0){
            cout << i << " - zero" << endl;
            i++;
        }    
        int X = i % 2;
        if (X != 0)
            cout << i << " - odd" << endl;
        else
            cout << i << " - even" << endl;
    }
    return 0;
}