#pragma once
#include <string>

namespace API {
    // Maze dimensions
    int mazeWidth();
    int mazeHeight();

    // Wall detection
    bool wallFront();
    bool wallRight();
    bool wallLeft();

    // Movement
    void moveForward(int distance = 1);
    void turnRight();
    void turnLeft();

    // Walls management
    void setWall(int x, int y, char direction);
    void clearWall(int x, int y, char direction);

    // Color management
    void setColor(int x, int y, char color);
    void clearColor(int x, int y);
    void clearAllColor();

    // Text management
    void setText(int x, int y, const std::string& text);
    void clearText(int x, int y);
    void clearAllText();

    // Reset handling
    bool wasReset();
    void ackReset();
}
