---@enum EOodleNetResult
local EOodleNetResult = {
    Unknown = 0,
    Success = 1,
    OodleDecodeFailed = 2,
    OodleSerializePayloadFail = 3,
    OodleBadDecompressedLength = 4,
    OodleNoDictionary = 5,
    EOodleNetResult_MAX = 6,
}

---@enum EOodleNetworkEnableMode
local EOodleNetworkEnableMode = {
    AlwaysEnabled = 0,
    WhenCompressedPacketReceived = 1,
    EOodleNetworkEnableMode_MAX = 2,
}

