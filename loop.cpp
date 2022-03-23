#include <iostream>

using namespace std;

int main(){
    int i = 0;
    loop:
    if (i < 10){
        cout << i << endl;
        i++;
        goto loop;
    }
 return 0;   
}