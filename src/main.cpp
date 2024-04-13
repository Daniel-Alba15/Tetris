#include "raylib.h"
#include "grid.h"

int main(void)
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(400, 800, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}