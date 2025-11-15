#pragma once
#include "CoreMinimal.h"
#include "EmptyPayload.h"
#include "BracketPayload.generated.h"

USTRUCT(BlueprintType)
struct FBracketPayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    ENGINE_API FBracketPayload();
};

