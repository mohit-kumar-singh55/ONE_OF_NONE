// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/OONCharacter.h"

// Sets default values
AOONCharacter::AOONCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called when the game starts or when spawned
void AOONCharacter::BeginPlay() {
	Super::BeginPlay();

	UE_LOG(LogTemp, Error, TEXT("Character Exists: %s"), *this->GetName());
	UE_LOG(LogTemp, Error, TEXT("Character Has Authority: %hhd"), HasAuthority());
	UE_LOG(LogTemp, Error, TEXT("Character is locally controlled: %hhd"), this->IsLocallyControlled());
	UE_LOG(LogTemp, Error, TEXT("Character local role: %d"), this->GetLocalRole());
	UE_LOG(LogTemp, Error, TEXT("Character remote role: %d"), this->GetRemoteRole());
}

// Called every frame
void AOONCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AOONCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
