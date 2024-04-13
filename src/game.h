#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    void Draw();
    Grid grid;

private:
    std::vector<Block> blocks;
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    Block currentBlock;
    Block nextBlock;
};