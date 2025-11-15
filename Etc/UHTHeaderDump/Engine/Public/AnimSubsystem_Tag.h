#pragma once
#include "CoreMinimal.h"
#include "AnimSubsystem.h"
#include "AnimSubsystem_Tag.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimSubsystem_Tag : public FAnimSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NodeIndices;
    
public:
    FAnimSubsystem_Tag();
};

