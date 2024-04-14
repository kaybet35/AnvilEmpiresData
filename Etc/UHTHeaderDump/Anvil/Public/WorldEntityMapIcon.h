#pragma once
#include "CoreMinimal.h"
#include "MapIconBase.h"
#include "WorldEntityMapIcon.generated.h"

class AVisActor;
class UEntityTemplate;
class UImage;
class USizeBox;
class UWorldEntityHandle;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UWorldEntityMapIcon : public UMapIconBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldEntityHandle* EntityHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MapItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* IconSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEntityTemplate* EntityTemplateCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisActor* VisActorCDO;
    
public:
    UWorldEntityMapIcon();

};

