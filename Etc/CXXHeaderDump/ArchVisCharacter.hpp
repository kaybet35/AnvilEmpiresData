#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x0618 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x0628 (size: 0x10)
    FString TurnAxisName;                                                             // 0x0638 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x0648 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0658 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0668 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0678 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x067C (size: 0x4)

}; // Size: 0x680

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x0EF8 (size: 0x18)
    FRotator RotationalDeceleration;                                                  // 0x0F10 (size: 0x18)
    FRotator MaxRotationalVelocity;                                                   // 0x0F28 (size: 0x18)
    float MinPitch;                                                                   // 0x0F40 (size: 0x4)
    float MaxPitch;                                                                   // 0x0F44 (size: 0x4)
    float WalkingFriction;                                                            // 0x0F48 (size: 0x4)
    float WalkingSpeed;                                                               // 0x0F4C (size: 0x4)
    float WalkingAcceleration;                                                        // 0x0F50 (size: 0x4)

}; // Size: 0xF90

#endif
