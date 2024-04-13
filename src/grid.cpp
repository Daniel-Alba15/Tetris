#include "grid.h"
#include "iostream"
#include "colors.h"

Grid::Grid()
{
    numberRows = 25;
    numberCols = 15;
    cellSize = 40;
    Initialize();
    colors = GetCellColors();
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