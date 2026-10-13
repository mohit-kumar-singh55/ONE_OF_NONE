// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameMode.h"

#include "OONGameMode.generated.h"

/**
 * Server-only authority for match flow, spawning,
 * elimination handling and determining the winner.
 */
UCLASS()
class ONE_OF_NONE_API AOONGameMode : public AGameMode {
	GENERATED_BODY()

	public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;
};
