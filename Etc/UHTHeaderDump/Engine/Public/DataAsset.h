#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "DataAsset.generated.h"

class UDataAsset;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UDataAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDataAsset> NativeClass;
    
public:
    UDataAsset();

};

