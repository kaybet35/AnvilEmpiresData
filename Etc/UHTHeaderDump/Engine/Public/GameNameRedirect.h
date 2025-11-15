#pragma once
#include "CoreMinimal.h"
#include "GameNameRedirect.generated.h"

USTRUCT(BlueprintType)
struct FGameNameRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OldGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewGameName;
    
    ENGINE_API FGameNameRedirect();
};

