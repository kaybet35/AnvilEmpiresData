#pragma once
#include "CoreMinimal.h"
#include "VisActor.h"
#include "VisEffect.generated.h"

class UArrowComponent;
class UAudioComponent;
class ULifetimeDataComponent;
class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ANVIL_API AVisEffect : public AVisActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULifetimeDataComponent* LifetimeDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeekAudioComponent;
    
public:
    AVisEffect(const FObjectInitializer& ObjectInitializer);

};

