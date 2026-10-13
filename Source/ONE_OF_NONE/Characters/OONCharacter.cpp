// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/OONCharacter.h"

// Sets default values
AOONCharacter::AOONCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called to bind functionality to input
void AOONCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
