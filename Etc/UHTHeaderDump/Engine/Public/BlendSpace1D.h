#pragma once
#include "CoreMinimal.h"
#include "BlendSpace.h"
#include "BlendSpace1D.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlendSpace1D : public UBlendSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleAnimation;
    
    UBlendSpace1D();

};

