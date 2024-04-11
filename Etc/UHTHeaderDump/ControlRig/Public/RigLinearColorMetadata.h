#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigBaseMetadata.h"
#include "RigLinearColorMetadata.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigLinearColorMetadata : public FRigBaseMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
public:
    FRigLinearColorMetadata();
};

