// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
//향상입력시스템
#include "EnhancedInputSubsystems.h"
#include "MyCharacter.h"
//InPawn으로 바꾸는 이유- 
void AMyPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UE_LOG(LogTemp, Warning, TEXT("OnPossess"));
	//마이폰에다 캐스팅 컨트롤러 붙이기
	AMyCharacter* MyPawn = Cast<AMyCharacter>(InPawn);

	if (IsValid(MyPawn))
	{
		if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
		{
			if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
			{
				if (MyPawn->IMC_Default) //IMC 컨트롤연결됨 IMC-Default를 연결
				{
					UE_LOG(LogTemp, Warning, TEXT("Test"));
					InputSystem->AddMappingContext(MyPawn->IMC_Default, 0);
				}
			}
		}
	}
}

void AMyPlayerController::OnUnPossess()
{
	//빙의 해제 상속
	Super::OnUnPossess();
}

void AMyPlayerController::BeginPlay()
{
	//BeginPlay 상속
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));
}
