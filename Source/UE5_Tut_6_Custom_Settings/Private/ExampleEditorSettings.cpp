// Fill out your copyright notice in the Description page of Project Settings.


#include "ExampleEditorSettings.h"

UExampleEditorSettings* UExampleEditorSettings::Get()
{
	return GetMutableDefault<UExampleEditorSettings>();
}

const UExampleEditorSettings* UExampleEditorSettings::GetConst()
{
	return GetDefault<UExampleEditorSettings>();
}
