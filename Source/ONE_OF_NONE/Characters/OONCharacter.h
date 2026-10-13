// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OONCharacter.generated.h"

/**
 * Replicated player avatar.
 * Server owns authoritative combat/body state.
 */
UCLASS()
class ONE_OF_NONE_API AOONCharacter : public ACharacter {
	GENERATED_BODY()

	public:
		// Sets default values for this character's properties
		AOONCharacter();


		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
