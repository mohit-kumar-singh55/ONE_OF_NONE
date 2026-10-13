// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/OONGameMode.h"

void AOONGameMode::BeginPlay() {
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("GameMode Exists!!"));
	UE_LOG(LogTemp, Warning, TEXT("GameMode Has Authority: %hhd"), HasAuthority());
}

void AOONGameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}
