#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "CustomMeshGenerator.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UDEPRECATED_CustomMeshGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
    UDEPRECATED_CustomMeshGenerator();

};

