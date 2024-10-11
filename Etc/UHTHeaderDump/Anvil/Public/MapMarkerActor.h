#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapIconInstanceProperty.h"
#include "MapMarkerActor.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AMapMarkerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapIconInstanceProperty MapIconProperty;
    
    AMapMarkerActor(const FObjectInitializer& ObjectInitializer);

};

