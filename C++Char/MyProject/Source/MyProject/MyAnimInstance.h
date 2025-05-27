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
	//��� : �ʴ� ������Ʈ �Ǵ� �ִϸ��̼�
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//���ǵ� ����
	UPROPERTY(BlueprintReadOnly, Category = "State", VisibleAnywhere)
	float Speed;
	//
	UPROPERTY(BlueprintReadOnly, Category = "State", VisibleAnywhere)
	uint8 bIsCrouched : 1;
};
