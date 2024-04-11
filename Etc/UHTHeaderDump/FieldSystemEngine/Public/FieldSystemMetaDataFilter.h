#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFilterType -FallbackName=EFieldFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldObjectType -FallbackName=EFieldObjectType
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldPositionType -FallbackName=EFieldPositionType
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataFilter.generated.h"

class UFieldSystemMetaDataFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataFilter : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldFilterType> FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldObjectType> ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldPositionType> PositionType;
    
    UFieldSystemMetaDataFilter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType, TEnumAsByte<EFieldObjectType> NewObjectType, TEnumAsByte<EFieldPositionType> NewPositionType);
    
};

