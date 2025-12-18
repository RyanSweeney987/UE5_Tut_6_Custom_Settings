// Fill out your copyright notice in the Description page of Project Settings.


#include "ExamplePluginSettings.h"

UExamplePluginSettings* UExamplePluginSettings::Get()
{
	return GetMutableDefault<UExamplePluginSettings>();
}

const UExamplePluginSettings* UExamplePluginSettings::GetConst()
{
	return GetDefault<UExamplePluginSettings>();
}

void UExamplePluginSettings::SetExampleFloat(const float InFloat)
{
	ExampleFloat = InFloat;
	
	// Update the config file after changing a value
	this->TryUpdateDefaultConfigFile();
}
