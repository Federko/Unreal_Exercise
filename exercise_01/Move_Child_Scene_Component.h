// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Move_Child_Scene_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AIV_EXERCISE_API UMove_Child_Scene_Component : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMove_Child_Scene_Component();
	UPROPERTY(EditAnywhere)
		UCurveVector *Curve;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
private:
	float ElaspedTime;
	float CurveMaxTime;
};
