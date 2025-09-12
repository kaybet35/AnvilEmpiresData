#include "AvatarProfile.h"

FAvatarProfile::FAvatarProfile() {
    this->AvatarId = 0;
    this->Type = EAnvilAvatarType::Default;
    this->OwnerType = EAnvilAvatarOwnerType::Personal;
    this->OwnerId = 0;
    this->StackSize = 0;
}

