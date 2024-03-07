// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// HasAutority() �� true��� ����, �츮�� �������� ���������� �ǹ��Ѵ�. 
	// false�̸� Ŭ���̾�Ʈ���� ���������� �ǹ��Ѵ�.
	if (HasAuthority())
	{
		FVector Location = GetActorLocation();
		Location += FVector(Speed * DeltaTime, 0, 0);
		SetActorLocation(Location);
	}
}
