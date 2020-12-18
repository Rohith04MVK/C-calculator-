#include <iostream>

using namespace std;

char lowercase(char alpha){
    return alpha - ('A' - 'a');
}

int main(){
    cout << lowercase('A');
    return 0;
}