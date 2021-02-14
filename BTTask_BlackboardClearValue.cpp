// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_BlackboardClearValue.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_BlackboardClearValue::UBTTask_BlackboardClearValue() 
{
    NodeName = TEXT("Clear BlackBoard Value");
}

EBTNodeResult::Type UBTTask_BlackboardClearValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

     OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());

    return EBTNodeResult::Succeeded;
}
