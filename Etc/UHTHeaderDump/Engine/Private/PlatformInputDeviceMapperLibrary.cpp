#include "PlatformInputDeviceMapperLibrary.h"

UPlatformInputDeviceMapperLibrary::UPlatformInputDeviceMapperLibrary() {
}

FPlatformUserId UPlatformInputDeviceMapperLibrary::PlatformUserId_None() {
    return FPlatformUserId{};
}

bool UPlatformInputDeviceMapperLibrary::NotEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::NotEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::IsValidPlatformId(FPlatformUserId UserId) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::IsValidInputDevice(FInputDeviceId DeviceID) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::IsUnpairedUserId(const FPlatformUserId PlatformId) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::IsInputDeviceMappedToUnpairedUser(const FInputDeviceId InputDevice) {
    return false;
}

FInputDeviceId UPlatformInputDeviceMapperLibrary::InputDeviceId_None() {
    return FInputDeviceId{};
}

FPlatformUserId UPlatformInputDeviceMapperLibrary::GetUserForUnpairedInputDevices() {
    return FPlatformUserId{};
}

FPlatformUserId UPlatformInputDeviceMapperLibrary::GetUserForInputDevice(FInputDeviceId DeviceID) {
    return FPlatformUserId{};
}

FInputDeviceId UPlatformInputDeviceMapperLibrary::GetPrimaryInputDeviceForUser(FPlatformUserId UserId) {
    return FInputDeviceId{};
}

EInputDeviceConnectionState UPlatformInputDeviceMapperLibrary::GetInputDeviceConnectionState(const FInputDeviceId DeviceID) {
    return EInputDeviceConnectionState::Invalid;
}

FInputDeviceId UPlatformInputDeviceMapperLibrary::GetDefaultInputDevice() {
    return FInputDeviceId{};
}

int32 UPlatformInputDeviceMapperLibrary::GetAllInputDevicesForUser(const FPlatformUserId UserId, TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UPlatformInputDeviceMapperLibrary::GetAllInputDevices(TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UPlatformInputDeviceMapperLibrary::GetAllConnectedInputDevices(TArray<FInputDeviceId>& OutInputDevices) {
    return 0;
}

int32 UPlatformInputDeviceMapperLibrary::GetAllActiveUsers(TArray<FPlatformUserId>& OutUsers) {
    return 0;
}

bool UPlatformInputDeviceMapperLibrary::EqualEqual_PlatformUserId(FPlatformUserId A, FPlatformUserId B) {
    return false;
}

bool UPlatformInputDeviceMapperLibrary::EqualEqual_InputDeviceId(FInputDeviceId A, FInputDeviceId B) {
    return false;
}


