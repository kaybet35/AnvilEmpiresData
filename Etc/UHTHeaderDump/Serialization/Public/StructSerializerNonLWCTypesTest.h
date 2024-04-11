#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2f -FallbackName=Box2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box3f -FallbackName=Box3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds3f -FallbackName=BoxSphereBounds3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix44f -FallbackName=Matrix44f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane4f -FallbackName=Plane4f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat4f -FallbackName=Quat4f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3f -FallbackName=Rotator3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "OrientedBoxFloat.h"
#include "StructSerializerNonLWCTypesTest.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerNonLWCTypesTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f Vector2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4f Vector4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix44f Matrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlane4f Plane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat4f Quat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3f Rotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3f Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox3f Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2f Box2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds3f BoxSphereBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrientedBoxFloat OrientedBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float float;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Double;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3f> VectorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector3f> StrToVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FVector3f> VectorSet;
    
    SERIALIZATION_API FStructSerializerNonLWCTypesTest();
};

