#include "raylib.h"
#include "grid.h"
#include "blocks.cpp"

int main(void)
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(400, 800, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    LBlock block = LBlock();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}