#pragma once
#include "CoreMinimal.h"
#include "LoginState.generated.h"

UENUM(BlueprintType)
enum class LoginState : uint8 {
    LoggedOut,
    LoggingIn,
    LoggedIn,
    LoggingOut,
};

