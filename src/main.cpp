#include "raylib.h"
#include "game.h"

int main(void)
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(400, 800, "Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}