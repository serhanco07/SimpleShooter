// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void GameHasEnded(class AActor *EndGameFocus = nullptr, bool bIsWinner = false) override;
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> LoseScreenClass;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WinScreenClass;
	UPROPERTY(EditAnywhere)
	float RestardDelay = 5.f;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HudClass;
	FTimerHandle RestartTimer;
	UPROPERTY()
	UUserWidget* HudScreen;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
