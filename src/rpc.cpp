#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int human, computer;

    /* initialize random seed: */
    srand(time(NULL));
    computer = rand() % 3 + 1;
    

    return 0;
}