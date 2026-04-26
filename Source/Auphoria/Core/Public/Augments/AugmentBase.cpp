// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Public/Augments/AugmentBase.h"

// Add default functionality here for any IAugmentBaseInterface functions that are not pure virtual.

void IAugmentBase::ApplyEffect(AActor* target)
{
	if (!target)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor not found when applying augment with name: "));
	}
}

void IAugmentBase::UnApplyEffect(AActor* target)
{
	if (!target)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor not found when UNapplying augment with name: "));
	}
}
