#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RigVMUserWorkflow.h"
#include "RigVMUserWorkflowOptions.generated.h"

UCLASS(Blueprintable)
class RIGVM_API URigVMUserWorkflowOptions : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMUserWorkflow Workflow;
    
public:
    URigVMUserWorkflowOptions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void ReportWarning(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void ReportInfo(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void ReportError(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
};

