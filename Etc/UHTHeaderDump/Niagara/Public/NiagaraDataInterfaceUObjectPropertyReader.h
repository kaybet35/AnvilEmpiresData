#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUObjectPropertyReaderRemap.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceUObjectPropertyReader.generated.h"

class AActor;
class UNiagaraComponent;

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding UObjectParameterBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraUObjectPropertyReaderRemap> PropertyRemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SourceActorComponentClass;
    
    UNiagaraDataInterfaceUObjectPropertyReader();

    UFUNCTION(BlueprintCallable)
    static void SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName);
    
};

