#include "random.h"

#include <time.h>
#include <stdlib.h>

static int initialised = 0;

void seed(int seed) {
    srand(seed);
}

static void getstate(void) {
    
}

int randint(int min, int max) {
    if (!initialised) {
        srand(time(NULL));
        initialised = 1;
    }
    
    return rand() % (max - min + 1) + min;
}


