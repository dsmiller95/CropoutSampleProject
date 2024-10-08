// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveEvaluation.h"
#include "ZoomCalculatorComponentNew.generated.h"


UCLASS( ClassGroup=(Custom), meta=(ScriptName="CustomSystemLibrary"), MinimalAPI )
class  UZoomCalculatorComponentNew : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	UZoomCalculatorComponentNew();  // Base class constructor
	
	UPROPERTY()
	uint8 MyByteField1;
	UPROPERTY()
	uint8 MyByteField2;
	UPROPERTY()
	uint8 MyByteField3;
	UPROPERTY()
	uint8 MyByteField4;
	/**
	 * Sample a curve to get a float. but fancy.
	 * @param curve						the curve
	 * @param fTime						how long inside the curve to sample. 
	 * @return							The fancy float value
	 */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Get Float Value Fancy", ScriptName = "ZoomCalculatorComponent"), Category="Custom|Fancy")
	static CROPOUTSAMPLEPROJECT_API float GetFancyCurveValue(UCurveFloat* curve, float fTime);

	/**
	 * Print a value. but fancy.
	 * @param fValue					the number to print 
	 * @return							nothing
	 */
	UFUNCTION(BlueprintCallable, meta=(DisplayName = "Priunt Value Fancy", ScriptName = "ZoomCalculatorComponent"), Category="Custom|Fancy")
	static CROPOUTSAMPLEPROJECT_API void PrintFancy(float fValue);

};
