#pragma once
#include "CoreMinimal.h"
#include "CompHandleData.h"
#include "DataComponent.h"
#include "EntityHandle.h"
#include "PlayerMountDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UPlayerMountDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle CurrentMountedEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompHandleData CurrentVehicleSeat;
    
    UPlayerMountDataComponent(const FObjectInitializer& ObjectInitializer);

};

