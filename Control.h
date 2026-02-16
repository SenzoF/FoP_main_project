//
// Created by USER on 2/16/2026.
//

#ifndef FOP_MAIN_PROJECT_SOROUSH_CONTROL_H
#define FOP_MAIN_PROJECT_SOROUSH_CONTROL_H

#include "Essentials.h"

#define TF template <typename Func, typename... Args>

//beginning of the functions.
void wait(unsigned n){
    SDL_Delay(n*1000);
}

TF
void repeat(unsigned n, Func&& func, Args&&... args){
    for(unsigned i=0; i<n; i++)
        func(forward<Args>(args)...);
}

TF
void forever(Func&& func, Args&&... args){
    while(true)
        func(forward<Args>(args)...);
}

#endif //FOP_MAIN_PROJECT_SOROUSH_CONTROL_H