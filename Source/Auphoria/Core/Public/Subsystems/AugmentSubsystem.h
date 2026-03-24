// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include <Core/Public/Augments/AugmentBase.h>
#include "AugmentSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class AUPHORIA_API UAugmentSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	

	// Call like this
	// GetGameInstance()->GetSubsystem<UAugmentSubsystem>()->TriggerAugment();

public:
	UAugmentSubsystem();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void TriggerAugment(IAugmentBase* Augment);
private:
	int PlayerAugment;
};
