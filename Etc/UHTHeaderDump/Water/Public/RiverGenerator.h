#pragma once
#include "CoreMinimal.h"
#include "WaterBodyGenerator.h"
#include "RiverGenerator.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UDEPRECATED_RiverGenerator : public UDEPRECATED_WaterBodyGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
    UDEPRECATED_RiverGenerator();

};

