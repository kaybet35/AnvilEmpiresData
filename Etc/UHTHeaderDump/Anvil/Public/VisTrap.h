#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisTrap.generated.h"

class UAnimationAsset;
class UArrowComponent;
class USkeletalMeshComponent;
class UTrapDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisTrap : public AVisActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* TriggeredAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrapDataComponent* TrapDataComponent;
    
public:
    AVisTrap(const FObjectInitializer& ObjectInitializer);

};

