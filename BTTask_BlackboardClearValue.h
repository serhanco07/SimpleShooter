// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTTask_BlackboardClearValue.generated.h"


/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API UBTTask_BlackboardClearValue : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTask_BlackboardClearValue();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
