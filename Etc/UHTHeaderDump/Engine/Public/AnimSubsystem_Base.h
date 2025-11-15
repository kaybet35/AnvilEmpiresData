#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystem.h"
#include "ExposedValueHandler.h"
#include "AnimSubsystem_Base.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimSubsystem_Base : public FAnimSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExposedValueHandler> ExposedValueHandlers;
    
public:
    FAnimSubsystem_Base();
};

