#pragma once
#include "CoreMinimal.h"
#include "DataComponent.h"
#include "EAnvilBuildStructureType.h"
#include "StructureDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UStructureDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnFoundation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInFamilyArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilBuildStructureType StructureType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BuilderId;
    
    UStructureDataComponent(const FObjectInitializer& ObjectInitializer);

};

