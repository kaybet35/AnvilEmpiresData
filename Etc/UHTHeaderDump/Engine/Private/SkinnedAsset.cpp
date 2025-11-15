#include "SkinnedAsset.h"

USkinnedAsset::USkinnedAsset() {
}

USkeletalMeshSocket* USkinnedAsset::FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const {
    return NULL;
}

USkeletalMeshSocket* USkinnedAsset::FindSocket(FName InSocketName) const {
    return NULL;
}


