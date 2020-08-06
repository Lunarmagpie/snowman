cmake_minimum_required(VERSION 3.16)
project(snowman)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(snowman
        .gitattributes
        CMakeLists.txt
        drawFunc.c
        drawFunc.h
        guess.c
        guess.h
        main.c
        titleScreen.c
        titleScreen.h
        words.txt randomWord.c randomWord.h)
