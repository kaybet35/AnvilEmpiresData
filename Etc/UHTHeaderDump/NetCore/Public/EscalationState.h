#pragma once
#include "CoreMinimal.h"
#include "StateStruct.h"
#include "EscalationState.generated.h"

USTRUCT(BlueprintType)
struct NETCORE_API FEscalationState : public FStateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogEscalate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDormant;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CooloffTime;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AutoEscalateTime;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 HighestTimePeriod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int8> AllTimePeriods;
    
public:
    FEscalationState();
};

