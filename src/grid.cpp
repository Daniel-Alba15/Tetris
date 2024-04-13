#include "grid.h"
#include "iostream"

Grid::Grid()
{
    numberRows = 25;
    numberCols = 15;
    cellSize = 40;
    Initialize();
    colors = GetCellsColors();
}

void Grid::Initialize()
{
    for (int row = 0; row < numberRows; row++)
    {
        for (int col = 0; col < numberCols; col++)
        {
            grid[row][col] = 0;
        }
    }
}

void Grid::Print()
{
    for (int row = 0; row < numberRows; row++)
    {
        for (int col = 0; col < numberCols; col++)
        {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::GetCellsColors()
{
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::Draw()
{
    for (int row = 0; row < numberRows; row++)
    {
        for (int col = 0; col < numberCols; col++)
        {
            int cellValue = grid[row][col];
            DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}