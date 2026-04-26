// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Public/Subsystems/AugmentSubsystem.h"

UAugmentSubsystem::UAugmentSubsystem(){}

void UAugmentSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("Game Subsystem CREATED"));
	Super::Initialize(Collection);
}

// Call like this
// GetGameInstance()->GetSubsystem<UAugmentSubsystem>()->TriggerAugment();

void UAugmentSubsystem::TriggerAugment(IAugmentBase* Augment)
{
	Augment->ApplyEffect(GetWorld()->GetFirstPlayerController()->GetPawn());
}