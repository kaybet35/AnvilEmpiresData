#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisTownCenter.generated.h"

class UTownHallDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisTownCenter : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTownHallDataComponent* TownHallDataComponent;
    
    AVisTownCenter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnderAttackChanged(const bool& OldVal, const bool& NewVal);
    
};

