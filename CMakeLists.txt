cmake_minimum_required(VERSION 4.0)
project(FoP_main_project_soroush)

set(CMAKE_CXX_STANDARD 20)

add_executable(FoP_main_project_soroush main.cpp
        Control.h
        Shapes.h
        Textures.h
        Essentials.h
        DragFunc.h
        Motion.h
        LookMenu.h
        SoundMenu.h
        blockArrangement.h)

target_link_libraries(${PROJECT_NAME} -lconio)
target_link_libraries(${PROJECT_NAME} -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer)
