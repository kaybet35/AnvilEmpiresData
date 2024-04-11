#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequenceTickManagerWidgetData.h"
#include "UMGSequenceTickManager.generated.h"

class UMovieSceneEntitySystemLinker;
class UUserWidget;

UCLASS(Blueprintable)
class UMG_API UUMGSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UUserWidget>, FSequenceTickManagerWidgetData> WeakUserWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UUMGSequenceTickManager();

};

