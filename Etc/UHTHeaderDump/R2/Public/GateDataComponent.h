#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilGateState.h"
#include "GateDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UGateDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilGateState OpenCloseState;
    
    UGateDataComponent(const FObjectInitializer& ObjectInitializer);

};

