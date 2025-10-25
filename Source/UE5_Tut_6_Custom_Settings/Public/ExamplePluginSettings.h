// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ExamplePluginSettings.generated.h"

#define LOCTEXT_NAMESPACE "FUE5_Tut_6_Custom_SettingsModule"

/**
 * More info on UCLASS config specifier:
 * https://unreal-garden.com/docs/uclass/#config
 *
 * Config = Plugin saves the settings in the Plugin.ini file
 * With DefaultConfig, this is the DefaultPlugin.ini file
 * Setting it to Test would save it in DefaultTest.ini
 *
 * Note: Setting values for settings works slightly different to other UObjects
 * When you create a UObject, you use the class as a template and instantiate as many objects that you need.
 * There's only 1 settings UObject and you modify it by changing the DefaultObject which
 * would otherwise be the template
 */
UCLASS(Config = Plugin, DefaultConfig, meta = (DisplayName = "Example Plugin Settings"), MinimalAPI)
class UExamplePluginSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	// More info on UPROPERTY config specifier: https://unreal-garden.com/docs/uproperty/#config
	UPROPERTY(Config, EditAnywhere, Category = Types)
	float ExampleFloat = 0.0f;
	
	UPROPERTY(Config, EditAnywhere, Category = Arrays)
	TArray<float> ExampleFloatArray;
	
	// Global static getters
	static UE5_TUT_6_CUSTOM_SETTINGS_API UExamplePluginSettings* Get();
	static UE5_TUT_6_CUSTOM_SETTINGS_API const UExamplePluginSettings* GetConst();

	void UE5_TUT_6_CUSTOM_SETTINGS_API SetExampleFloat(const float InFloat);
	
	// Can override UObject functions like PostInitProperties

	UE5_TUT_6_CUSTOM_SETTINGS_API virtual FName GetCategoryName() const override
	{
		// The category under which the settings appear in the Project Settings window
		return TEXT("Plugins");
	}
	
#if WITH_EDITOR
	UE5_TUT_6_CUSTOM_SETTINGS_API virtual FText GetSectionText() const override
	{
		// This is what you see on the left with all the settings to select and top of the settings
		return LOCTEXT("SectionText", "Example Section Text");
	}

	UE5_TUT_6_CUSTOM_SETTINGS_API virtual FText GetSectionDescription() const override
	{
		// Example of using NSLOCTEXT for namespacing
		return NSLOCTEXT("FUE5_Tut_6_Custom_SettingsModule", "SectionDesc", "Example section description");
	}
#endif
};
