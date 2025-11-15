#pragma once
#include "CoreMinimal.h"
#include "SmartName.h"
#include "AnimCurveBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastObservedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSmartName Name;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveTypeFlags;
    
public:
    FAnimCurveBase();
};

