#pragma once
#include "CoreMinimal.h"
#include "VisStructure.h"
#include "VisRelicTechCenter.generated.h"

class URelicTechCenterDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisRelicTechCenter : public AVisStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelicTechCenterDataComponent* RelicTechCenterDataComponent;
    
    AVisRelicTechCenter(const FObjectInitializer& ObjectInitializer);

};

