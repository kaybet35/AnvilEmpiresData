#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisTreeFall.generated.h"

class UArrowComponent;
class UCurveFloat;
class UStaticMeshComponent;
class UTreeFallDataComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisTreeFall : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TreeTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FallCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTreeFallDataComponent* TreeFallDataComponent;
    
public:
    AVisTreeFall(const FObjectInitializer& ObjectInitializer);

};

