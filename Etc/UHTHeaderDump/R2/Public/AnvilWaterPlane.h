#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnvilWaterPlane.generated.h"

class UArrowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class R2_API AAnvilWaterPlane : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaterMesh;
    
    AAnvilWaterPlane(const FObjectInitializer& ObjectInitializer);

};

