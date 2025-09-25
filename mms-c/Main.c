#include <stdio.h>

#include "API.h"

struct point
    {
        int x;
        int y;
    };

void log(char* text) {
    fprintf(stderr, "%s\n", text);
    fflush(stderr);
}

int main(int argc, char* argv[]) {
    log("Running...");
    API_setColor(0, 0, 'G');
    API_setText(0, 0, "abc");
    

     
    const point goal = {9, 9};
    while (1) {
        
        
     
    }
}
