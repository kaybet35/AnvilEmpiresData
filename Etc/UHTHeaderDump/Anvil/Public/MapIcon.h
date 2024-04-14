#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "MapIconBase.h"
#include "MapIcon.generated.h"

class AActor;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UMapIcon : public UMapIconBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Marker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconBox;
    
public:
    UMapIcon();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsIconEnabled();
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetIconVisibility();
    
};

