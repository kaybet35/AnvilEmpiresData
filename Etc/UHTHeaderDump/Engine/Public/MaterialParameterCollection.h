#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectionScalarParameter.h"
#include "CollectionVectorParameter.h"
#include "MaterialParameterCollection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialParameterCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectionScalarParameter> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectionVectorParameter> VectorParameters;
    
    UMaterialParameterCollection();

    UFUNCTION(BlueprintCallable)
    TArray<FName> GetVectorParameterNames();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetVectorParameterDefaultValue(FName ParameterName, bool& bParameterFound);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetScalarParameterNames();
    
    UFUNCTION(BlueprintCallable)
    float GetScalarParameterDefaultValue(FName ParameterName, bool& bParameterFound);
    
};

