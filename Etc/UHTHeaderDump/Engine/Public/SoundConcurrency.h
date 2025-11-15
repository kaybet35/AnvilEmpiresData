#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundConcurrencySettings.h"
#include "SoundConcurrency.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USoundConcurrency : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundConcurrencySettings Concurrency;
    
    USoundConcurrency();

};

