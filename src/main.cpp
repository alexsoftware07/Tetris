#include <raylib.h>
#include "grid.h"
//***COMMAND LINE TO COMPILE CODE
//g++ main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main
//./main  to execute the main.exe file and run the raylib window
//

int main()
{
    Color darkBlue = {44,44,127,255};
    InitWindow(300,600,"Tetris by Alexandru Ciuca");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;


    grid.Print();
    while(WindowShouldClose() == false){
        

        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
    

        EndDrawing();
    }

    CloseWindow();
    return 0;
}