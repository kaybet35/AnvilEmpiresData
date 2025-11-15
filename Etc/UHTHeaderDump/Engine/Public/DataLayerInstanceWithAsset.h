#pragma once
#include "CoreMinimal.h"
#include "DataLayerInstance.h"
#include "DataLayerInstanceWithAsset.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable)
class ENGINE_API UDataLayerInstanceWithAsset : public UDataLayerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
public:
    UDataLayerInstanceWithAsset();

};

