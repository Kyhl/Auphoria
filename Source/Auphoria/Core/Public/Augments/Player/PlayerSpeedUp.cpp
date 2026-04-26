// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Public/Augments/Player/PlayerSpeedUp.h"



void PlayerSpeedUp::ApplyEffect(AActor* target)
{
	/*Super::ApplyEffect(target);
	APawn* pawn = GetWorld()->GetFirstPlayerController()->GetPawn();*/
	//pawn->TurnOff();
	UE_LOG(LogTemp, Warning, TEXT("Pawn Disabled hehe"));
}
void PlayerSpeedUp::UnApplyEffect(AActor* target)
{

}
