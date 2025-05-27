// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
//
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera -> SetupAttachment(CameraBoom);

	GetMesh()->SetRelativeLocationAndRotation(
		FVector(0, 0, -GetCapsuleComponent()->GetScaledCapsuleHalfHeight()),
		FRotator(0, -90.0f, 0)
	);
	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* PC = Cast<APlayerController>(Controller);

	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	//캐릭터에 바인드
	//PlayerInputComponent를 UEnhancedInputComponent로 캐스팅하여 사용
	//언리얼의 새로운 Enhanced Input System을 사용할 때는 UEnhancedInputComponent를 통해서 InputAction 바인딩을 해야 하기 때문에 이 캐스팅이 필요
	UEnhancedInputComponent* UEIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (UEIC)//UEIC가 참이면
	{
		//UEIC가 BIndAction함수 사용
		//BindAction은 (키 이름,트리거이벤트,움직일오브젝트,사용하는 기능 )
		//BindAction(const UInputAction* Action, ETriggerEvent TriggerEvent, UObject* Object, FName FunctionName)
		UEIC->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyCharacter::OnMove);
		
		UEIC->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AMyCharacter::OnLook);
		
		UEIC->BindAction(IA_Jump, ETriggerEvent::Triggered, this, &AMyCharacter::OnJump);

		UEIC->BindAction(IA_Zoom, ETriggerEvent::Triggered, this, &AMyCharacter::OnZoom);
		

		//IMC
		UEIC->BindAction(IA_Crouch, ETriggerEvent::Triggered, this, &AMyCharacter::OnCrouch);
	}



}

void AMyCharacter::OnMove(const FInputActionValue& value)
{
	//좌표// FVector2D는 2차원 배열이기 때문에 Get<>을 FVector2D로 맞춰야함
	//이동된 좌표 저장
	//Enhanced Input 시스템에서 입력으로 들어온 value 값을 FVector2D 타입으로 꺼내와서 DirectionVector라는 변수에 저장한다.
	FVector2D DirectionVector = value.Get<FVector2D>();
	
	
	//회전

	//1.입력된 회전값 저장하는 식
	FRotator CameraRotation = GetControlRotation();

	//2.각각의 회전값을 하나의 변수에 저장
	//FRotator - 회전을 표현하는 구조체 FRotator(Pitch, Yaw, Roll) - FRotator의 Yaw는 Z축을 나타낸다- pitch를 날림 바닥 안뚫게하려고함
	FRotator FloorProjectionRotation = FRotator(0, CameraRotation.Yaw, CameraRotation.Roll);
	
	//3.앞쪽을 나타내는 것/ FVector 주의
	//UKismetMathLibrary::GetForwardVector() -특정 회전값을 기준으로 앞방향을 구할떄 사용
	//FloorProjectionRotation-를 앞방향, 즉 카메라 앞쪽으로 사용하는 식
	FVector CameraForward = UKismetMathLibrary::GetForwardVector(FloorProjectionRotation);
	

	//4.y축을 나태내는 것 FVector 주의
	FVector CameraRight = UKismetMathLibrary::GetRightVector(FloorProjectionRotation);


	//카메라 방향이 Y인 이유? 함 물어볼 것
	AddMovementInput(CameraForward, DirectionVector.Y);
	AddMovementInput(CameraRight, DirectionVector.X);



}

void AMyCharacter::OnLook(const FInputActionValue& value)
{
	//CameraBoom->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, SpringArm->TargetArmLength + Value.Get<float>() * -200.0f, UGameplayStatics::GetWorldDeltaSeconds(GetWorld()), 10.0f);
	FVector2D LookVector = value.Get<FVector2D>();

	AddControllerYawInput(LookVector.X);//도리도리방향
	AddControllerPitchInput(LookVector.Y);//끄덕끄덕방향

}

void AMyCharacter::OnZoom(const FInputActionValue& value)
{

	CameraBoom->TargetArmLength += value.Get<float>() * -10.0f;
	CameraBoom->TargetArmLength = FMath::Clamp(CameraBoom->TargetArmLength,100.0f,
		600.0f);
}

void AMyCharacter::OnJump(const FInputActionValue& value)
{
	Jump(); // 점프는 할 수 있는 함수가 있음
}

void AMyCharacter::OnCrouch(const FInputActionValue& value)
{
	if (CanCrouch())
	{
		Crouch();
	}
	else
	{
		UnCrouch();
	}
}

