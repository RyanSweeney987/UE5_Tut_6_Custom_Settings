// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test.generated.h"

UCLASS()
class UE5_TUT_6_CUSTOM_SETTINGS_API ATest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATest();
	
	UFUNCTION(CallInEditor, Category = "Test")
	void TestSettings();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
