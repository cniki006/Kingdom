// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GradiantVectors.generated.h"

/**
 * 
 */
UCLASS()
class KINGDOM_API UGradiantVectors : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PerlinNoise")
	static FVector2D Calculate(int ix, int iy);
	
};
