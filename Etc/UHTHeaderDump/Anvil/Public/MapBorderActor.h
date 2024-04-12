#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "MapBorderActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AMapBorderActor : public ACameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BoxVisualizer;
    
public:
    AMapBorderActor(const FObjectInitializer& ObjectInitializer);

};

