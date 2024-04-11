#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MediaPlate.generated.h"

class UMediaPlateComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MEDIAPLATE_API AMediaPlate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaPlateComponent* MediaPlateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AMediaPlate(const FObjectInitializer& ObjectInitializer);

};

