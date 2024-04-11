#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IKRigGoal.h"
#include "IKGoalCreatorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UIKGoalCreatorInterface : public UInterface {
    GENERATED_BODY()
};

class IIKGoalCreatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals);
    
};

