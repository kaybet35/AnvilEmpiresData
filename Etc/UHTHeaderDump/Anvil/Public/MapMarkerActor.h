#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapMarkerActor.generated.h"

class UMapMarkerComponent;

UCLASS(Blueprintable)
class ANVIL_API AMapMarkerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapMarkerComponent* Marker;
    
public:
    AMapMarkerActor(const FObjectInitializer& ObjectInitializer);

};

