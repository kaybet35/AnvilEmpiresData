#pragma once
#include "CoreMinimal.h"
#include "VisStaticMeshComponent.h"
#include "VisRandomizedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ANVIL_API UVisRandomizedStaticMeshComponent : public UVisStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityChance;
    
public:
    UVisRandomizedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

