// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	//상속 : 초당 업데이트 되는 애니메이션
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//스피드 변수
	UPROPERTY(BlueprintReadOnly, Category = "State", VisibleAnywhere)
	float Speed;
	//
	UPROPERTY(BlueprintReadOnly, Category = "State", VisibleAnywhere)
	uint8 bIsCrouched : 1;
};
