#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationDataChunk.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UNavigationDataChunk : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavigationDataName;
    
    UNavigationDataChunk();

};

