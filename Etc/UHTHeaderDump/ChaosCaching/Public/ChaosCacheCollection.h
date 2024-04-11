#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChaosCacheCollection.generated.h"

class UChaosCache;

UCLASS(Blueprintable)
class CHAOSCACHING_API UChaosCacheCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChaosCache*> Caches;
    
    UChaosCacheCollection();

};

