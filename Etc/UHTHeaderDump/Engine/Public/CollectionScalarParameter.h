#pragma once
#include "CoreMinimal.h"
#include "CollectionParameterBase.h"
#include "CollectionScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FCollectionScalarParameter : public FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    ENGINE_API FCollectionScalarParameter();
};

