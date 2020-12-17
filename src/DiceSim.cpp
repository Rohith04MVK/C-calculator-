#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Dice(int range1, int range2, int count){

    int i;

    for(i = 0; i < count; i++)
    {
        int num = rand() % (range1 - range2 + 1) + range1;
        cout << num;

    }
    return 0;
}

int main(){

    int range1 = 1, range2 = 10, count = 2;

    Dice(range1, range2, count);

    return 0;
}