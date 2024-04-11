#pragma once
#include "CoreMinimal.h"
#include "AnvilScreen.h"
#include "ServerSelectScreen.generated.h"

class UListView;

UCLASS(Blueprintable, EditInlineNew)
class ANVIL_API UServerSelectScreen : public UAnvilScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ServerList;
    
public:
    UServerSelectScreen();

};

