#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBlendPose.h"
#include "BoneMaskFilter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBoneMaskFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBlendPose> BlendPoses;
    
    UBoneMaskFilter();

};

