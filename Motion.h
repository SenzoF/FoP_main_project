//
// Created by USER on 2/16/2026.
//

#ifndef FOP_MAIN_PROJECT_SOROUSH_MOTION_H
#define FOP_MAIN_PROJECT_SOROUSH_MOTION_H

#include "Essentials.h"
#include "Shapes.h"

void move_n_step(bool isFacingRight, int n, mainsprite &sprite) {

    if (isFacingRight) {
        for (int i = 0; i < n; i++) {
            sprite.x += 1;
        }

    }
    else {
        for (int i = 0; i < n; i++) {
            sprite.x -= 1;
        }
    }

}

void turn_right_n_degree(double n,mainsprite &sprite) {
    double angle = n;

    sprite.angle += angle;

}
void turn_left_n_degree(double n,mainsprite &sprite) {
    double angle = n;

    sprite.angle += angle;

}

#endif //FOP_MAIN_PROJECT_SOROUSH_MOTION_H