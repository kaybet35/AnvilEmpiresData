#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldEntityPoolManager.generated.h"

class UAnvilGameInstance;
class URegionEntry;

UCLASS(Blueprintable)
class UWorldEntityPoolManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnvilGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, URegionEntry*> RegionIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, URegionEntry*> RegionHashMap;
    
public:
    UWorldEntityPoolManager();

};

