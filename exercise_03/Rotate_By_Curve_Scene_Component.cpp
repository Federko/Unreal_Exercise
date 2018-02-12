// Fill out your copyright notice in the Description page of Project Settings.

#include "Rotate_By_Curve_Scene_Component.h"


// Sets default values for this component's properties
URotate_By_Curve_Scene_Component::URotate_By_Curve_Scene_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotate_By_Curve_Scene_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ElaspedTime = 0.0f;
	float min;
	Curve->GetTimeRange(min, CurveMaxTime);
}


// Called every frame
void URotate_By_Curve_Scene_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	/// elapsed time
	ElaspedTime += DeltaTime;
	if (ElaspedTime > CurveMaxTime)
	{
		ElaspedTime = 0.0f;
	}
	///Get Value from vector by time
	FRotator Rotation = Curve->GetRotatorValue(ElaspedTime);

	SetRelativeRotation(Rotation);
}

