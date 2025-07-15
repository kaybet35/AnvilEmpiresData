#pragma once
#include "CoreMinimal.h"
#include "FootprintSharedCompEntry.generated.h"

class UProxyComponent;

USTRUCT(BlueprintType)
struct FFootprintSharedCompEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProxyComponent* Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHighlight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHide: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoCopyToBuildSite: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInsertToStartOfComponentArray: 1;
    
    R2_API FFootprintSharedCompEntry();
};

