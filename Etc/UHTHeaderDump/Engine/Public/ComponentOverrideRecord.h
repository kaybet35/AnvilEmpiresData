#pragma once
#include "CoreMinimal.h"
#include "BlueprintCookedComponentInstancingData.h"
#include "ComponentKey.h"
#include "ComponentOverrideRecord.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FComponentOverrideRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* ComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentKey ComponentKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
    
    ENGINE_API FComponentOverrideRecord();
};

