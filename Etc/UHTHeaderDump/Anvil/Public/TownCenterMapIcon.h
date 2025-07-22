#pragma once
#include "CoreMinimal.h"
#include "MapIcon.h"
#include "TownCenterMapIcon.generated.h"

class AVisTownCenter;
class UBorder;
class UButton;
class USizeBox;
class UStatusWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UTownCenterMapIcon : public UMapIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisTownCenter* TownCenter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* IconSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* IconButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownNameBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TownStatusBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumPledgedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumTentsStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatusWidget* NumReinforcementSuppliesStatus;
    
public:
    UTownCenterMapIcon();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateName();
    
protected:
    UFUNCTION(BlueprintCallable)
    FText GetNumTentsText();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumReinforcementSuppliesText();
    
    UFUNCTION(BlueprintCallable)
    FText GetNumPledgedText();
    
};

