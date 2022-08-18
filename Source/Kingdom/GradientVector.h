// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class KINGDOM_API GradientVector
{
public:
	GradientVector();
	~GradientVector();

	FVector2D Calculate(int ix, int iy);
};
