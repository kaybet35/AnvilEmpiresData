#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisFamilyMarkerArea.generated.h"

class UFamilyAreaMarkerDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisFamilyMarkerArea : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFamilyAreaMarkerDataComponent* FamilyAreaMarkerDataComponent;
    
    AVisFamilyMarkerArea(const FObjectInitializer& ObjectInitializer);

};

