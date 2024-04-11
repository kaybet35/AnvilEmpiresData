#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EAnvilFactionId -FallbackName=EAnvilFactionId
#include "ArmourTypeMeshes.h"
#include "PlayerVisualsInfo.generated.h"

UCLASS(Blueprintable)
class ANVIL_API APlayerVisualsInfo : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnvilFactionId, FArmourTypeMeshes> FactionArmourMeshesMap;
    
public:
    APlayerVisualsInfo(const FObjectInitializer& ObjectInitializer);

};

