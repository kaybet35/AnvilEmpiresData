#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3D.h"
#include "NiagaraDataInterfaceRasterizationGrid3D.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetValue;
    
    UNiagaraDataInterfaceRasterizationGrid3D();

};

