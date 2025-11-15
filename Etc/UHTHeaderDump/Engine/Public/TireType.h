#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "TireType.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UTireType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    UTireType();

};

