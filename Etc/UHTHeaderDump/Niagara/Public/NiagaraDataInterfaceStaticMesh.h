#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ENDIStaticMesh_SourceMode.h"
#include "NDIStaticMeshSectionFilter.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceStaticMesh.generated.h"

class AActor;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENDIStaticMesh_SourceMode SourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DefaultMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SoftSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SourceComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNDIStaticMeshSectionFilter SectionFilter;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhysicsBodyVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FilteredSockets;
    
    UNiagaraDataInterfaceStaticMesh();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason);
    
};

