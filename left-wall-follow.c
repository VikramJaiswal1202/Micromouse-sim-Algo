#include <stdio.h>
#include "API.h"
void simPrint(char* text) {
    fprintf(stderr, "%s\n", text);
    fflush(stderr);
}


#define MAZE_WIDTH API_mazeWidth()
#define MAZE_HEIGHT API_mazeHeight()
#define START_X 0
#define START_Y 0
#define GOAL_X (MAZE_WIDTH/2)
#define GOAL_Y (MAZE_HEIGHT/2)



int main(int argc, char* argv[]) {
    
    while(1){
        if(!API_wallLeft()){
            API_turnLeft();
            API_moveForward();
        }else if(API_wallFront()){
            API_turnRight();
        }else{
            API_moveForward();
        }
    }
}
void computeFloodFill() {
    

}
