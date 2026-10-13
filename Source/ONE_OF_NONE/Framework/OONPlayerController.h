// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OONPlayerController.generated.h"

/**
 * Exists on the server and the owning client.
 * Handles local input/UI and player-specific communication.
 */
UCLASS()
class ONE_OF_NONE_API AOONPlayerController : public APlayerController {
	GENERATED_BODY()
};
