#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RigVMByteCode.h"
#include "RigVMExtendedExecuteContext.h"
#include "RigVMInstructionArray.h"
#include "RigVMParameter.h"
#include "RigVMStatistics.h"
#include "RigVM.generated.h"

class URigVM;
class URigVMMemoryStorage;
class UScriptStruct;

UCLASS(Blueprintable)
class RIGVM_API URigVM : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVMMemoryStorage* WorkMemoryStorageObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVMMemoryStorage* LiteralMemoryStorageObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigVMMemoryStorage* DebugMemoryStorageObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMByteCode ByteCodeStorage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMInstructionArray Instructions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRigVMExtendedExecuteContext Context;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 NumExecutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FunctionNamesStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMParameter> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ParametersNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URigVM* DeferredVMToCopy;
    
public:
    URigVM();

    UFUNCTION(BlueprintCallable)
    void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueString(const FName& InParameterName, const FString& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueDouble(const FName& InParameterName, double InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRigVMStatistics GetStatistics() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetRigVMFunctionName(int32 InFunctionIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    double GetParameterValueDouble(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    bool Execute(const FName& InEntryName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRigVMFunction(UScriptStruct* InRigVMStruct, const FName& InMethodName);
    
};

