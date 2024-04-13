#pragma once
#include "vector"
#include "raylib.h"

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[25][15];

private:
    int numberRows;
    int numberCols;
    int cellSize;
    std::vector<Color> colors;
};