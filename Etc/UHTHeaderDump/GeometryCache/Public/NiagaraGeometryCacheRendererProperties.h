#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraRendererProperties -FallbackName=NiagaraRendererProperties
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraVariableAttributeBinding -FallbackName=NiagaraVariableAttributeBinding
#include "NiagaraGeometryCacheReference.h"
#include "NiagaraGeometryCacheRendererProperties.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraGeometryCacheReference> GeometryCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLooping;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ComponentCountLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding RotationBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding ScaleBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding ElapsedTimeBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding EnabledBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding ArrayIndexBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RendererVisibility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssignComponentsOnParticleID;
    
    UNiagaraGeometryCacheRendererProperties();

};

