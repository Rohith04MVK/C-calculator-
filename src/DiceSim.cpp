#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Dice(int range1, int range2, int count){

    int i;

    for(i = 0; i < count; i++)
    {
        int num = rand() % (range2 - range1 + 1) + range1;
        cout << num << " ";
        
    }

}

int main(){

    int range1 = 1, range2 = 10, count = 5;

    srand(time(0));

    Dice(range1, range2, count);

    return 0;
}