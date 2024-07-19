#include <raylib.h>

//***COMMAND LINE TO COMPILE CODE
//g++ main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main
//

int main()
{
    Color darkBlue = {44,44,127,255};
    InitWindow(300,600,"Tetris by Alexandru Ciuca");
    SetTargetFPS(60);

    while(WindowShouldClose() == false){
        

        BeginDrawing();
        ClearBackground(darkBlue);

    

        EndDrawing();
    }

    CloseWindow();
    return 0;
}