// Fill out your copyright notice in the Description page of Project Settings.


#include "GradiantVectors.h"

FVector2D UGradiantVectors::Calculate(int ix, int iy) {
    // No precomputed gradients mean this works for any number of grid coordinates
    const unsigned w = 8 * sizeof(unsigned);
    const unsigned s = w / 2; // rotation width
    unsigned a = ix, b = iy;
    a *= 3284157443; b ^= a << s | a >> (w - s);
    b *= 1911520717; a ^= b << s | b >> (w - s);
    a *= 2048419325;
    float random = a * (3.14159265 / ~(~0u >> 1)); // in [0, 2*Pi]
    FVector2D v;
    v.X = cos(random); v.Y = sin(random);
    return v;
}