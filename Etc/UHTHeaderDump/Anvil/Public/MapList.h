#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "MapData.h"
#include "MapList.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AMapList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMapData> MapDatabase;
    
public:
    AMapList(const FObjectInitializer& ObjectInitializer);

};

