// Fill out your copyright notice in the Description page of Project Settings.
#include "BlueprintCustomLibrary.h"

#include "Logging/StructuredLog.h"
#include "Internationalization/Internationalization.h"

// Sets default values for this component's properties
UBlueprintCustomLibrary::UBlueprintCustomLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}



float UBlueprintCustomLibrary::GetFancyCurveValue(const UCurveFloat* curve, float fTime)
{
	
	// if (!ensure(curve)) // Check if the curve is valid, otherwise log an error
	// {
	// 	// Return a default value if the curve is null, to prevent crashing
	// 	return 0.0f;
	// }
	
	if(curve == nullptr)
	{
		UE_LOGFMT(LogBlueprint, Error, "Attempted to sample from null curve. returning 0. Node: Get Float Value Fanciest");
		return 0;
	}
	return curve->GetFloatValue(fTime);
}

void UBlueprintCustomLibrary::PrintFancy(float fValue)
{
	UE_LOGFMT(LogTemp, Display, "FANCY FLOAT HERE {Value}", fValue);
}
