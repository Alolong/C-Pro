// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	//컨트롤러에는 빙의, 빙의해제, 시작시 플레이 사용
	virtual void OnPossess(APawn* aPawn) override;

	virtual void OnUnPossess() override;

	virtual void BeginPlay() override;

};
