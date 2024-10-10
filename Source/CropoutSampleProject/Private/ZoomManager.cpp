// Fill out your copyright notice in the Description page of Project Settings.


#include "ZoomManager.h"

#include "Camera/CameraComponent.h"
#include "Logging/StructuredLog.h"


// Sets default values for this component's properties
UZoomManager::UZoomManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	// NOTE: I wrote this
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UZoomManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UZoomManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UZoomManager::MoveZoom(float InDirection)
{
	auto cam = this->GetOwner()->GetComponentByClass<UCameraComponent>();
	
	UE_LOGFMT(LogTemp, Display, "IM GONNA ZOOM {Value}", InDirection);
}

