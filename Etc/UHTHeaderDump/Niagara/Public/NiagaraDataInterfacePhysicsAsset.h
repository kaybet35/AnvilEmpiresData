#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfacePhysicsAsset.generated.h"

class AActor;
class UPhysicsAsset;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefaultSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SoftSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding MeshUserParameter;
    
    UNiagaraDataInterfacePhysicsAsset();

};

