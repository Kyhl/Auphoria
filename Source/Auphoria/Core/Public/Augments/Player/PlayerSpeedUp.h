// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Public/Augments/AugmentBase.h"

/**
 * 
 */
class AUPHORIA_API PlayerSpeedUp : public IAugmentBase
{

public:


	void ApplyEffect() override;
	void UnApplyEffect() override;
};
