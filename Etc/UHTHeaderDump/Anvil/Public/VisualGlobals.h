#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "VisualGlobals.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ANVIL_API AVisualGlobals : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoundationDecorSnapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> AutoCreateDynamicInstancedMeshGroup;
    
    AVisualGlobals(const FObjectInitializer& ObjectInitializer);

};

