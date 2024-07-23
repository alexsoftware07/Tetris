# Tetris

A simple tetris clone written in c++


![image](https://github.com/user-attachments/assets/554de004-3d61-4c31-9233-60442acb2027)



# Controls

- Left/Right/Down Arrow - Move piece left/right/down.

- Up Arrow - Rotate piece clockwise.

- Escape - Quit.

# Dependencies

- [C++ Compiler](https://code.visualstudio.com/docs/languages/cpp)

- [Raylib](https://www.raylib.com/)


# Building and Running (Terminal command)

You must use this following commands in the terminal of the src folder, cd into the src folder to execute the program.

```
g++ main.cpp block.cpp blocks.cpp colors.cpp grid.cpp position.cpp game.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main

./main

```

