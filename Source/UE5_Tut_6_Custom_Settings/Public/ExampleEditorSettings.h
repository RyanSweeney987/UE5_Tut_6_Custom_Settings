// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ExampleEditorSettings.generated.h"

/**
 * Everything is pretty much the same as Plugin settings, except the Config specifier is different.
 * Config = EditorPerProjectUserSettings saves the settings in the EditorPerProjectUserSettings.ini
 * and is under Editor Preferences instead of Project Settings.
 */
UCLASS(Config = EditorPerProjectUserSettings, DefaultConfig, meta = (DisplayName = "Example Editor Settings"), MinimalAPI)
class UExampleEditorSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	// More info on config UPROPERTY specifiers https://unreal-garden.com/docs/uproperty/#config
	UPROPERTY(Config, EditAnywhere, Category = Types)
	FName ExampleName = NAME_None;
	
	UPROPERTY(Config, EditAnywhere, Category = Arrays)
	FLinearColor ExampleColour = FLinearColor::Red;

	// Global static getters
	static UE5_TUT_6_CUSTOM_SETTINGS_API UExampleEditorSettings* Get();
	static UE5_TUT_6_CUSTOM_SETTINGS_API const UExampleEditorSettings* GetConst();
};
