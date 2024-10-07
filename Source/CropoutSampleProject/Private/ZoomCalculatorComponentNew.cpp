// Fill out your copyright notice in the Description page of Project Settings.
#include "ZoomCalculatorComponentNew.h"

// Sets default values for this component's properties
UZoomCalculatorComponentNew::UZoomCalculatorComponentNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}



float UZoomCalculatorComponentNew::GetFancyCurveValue(UCurveFloat* curve, float fTime)
{
	return curve->GetFloatValue(fTime);
}