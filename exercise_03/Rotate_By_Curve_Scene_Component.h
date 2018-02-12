// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CurveRotator.h"
#include "Rotate_By_Curve_Scene_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AIV_EXERCISE_00_API URotate_By_Curve_Scene_Component : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URotate_By_Curve_Scene_Component();
	UPROPERTY(EditAnywhere)
		UCurveRotator *Curve;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float ElaspedTime;
	float CurveMaxTime;
		
	
};
