// Fill out your copyright notice in the Description page of Project Settings.
#include "ZoomCalculatorComponentNew.h"

#include "Logging/StructuredLog.h"

// Sets default values for this component's properties
UZoomCalculatorComponentNew::UZoomCalculatorComponentNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}



float UZoomCalculatorComponentNew::GetFancyCurveValue(UCurveFloat* curve, float fTime)
{
	return curve->GetFloatValue(fTime);
}

void UZoomCalculatorComponentNew::PrintFancy(float fValue)
{
	UE_LOGFMT(LogTemp, Display, "FANCY FLOAT HERE {Value}", fValue);
}
