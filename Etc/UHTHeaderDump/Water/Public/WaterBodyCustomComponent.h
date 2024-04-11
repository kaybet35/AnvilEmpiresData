#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyCustomComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WATER_API UWaterBodyCustomComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
public:
    UWaterBodyCustomComponent(const FObjectInitializer& ObjectInitializer);

};

