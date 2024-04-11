#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "MeshVisibilityDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UMeshVisibilityDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UMeshVisibilityDataComponent(const FObjectInitializer& ObjectInitializer);

};

