---@enum ChannelType
ChannelType = {
    NonPositional = 0,
    Positional = 1,
    Echo = 2,
    ChannelType_MAX = 3,
}

---@enum ConnectionState
ConnectionState = {
    Disconnected = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
    ConnectionState_MAX = 4,
}

---@enum DeviceType
DeviceType = {
    NullDevice = 0,
    SpecificDevice = 1,
    DefaultSystemDevice = 2,
    DefaultCommunicationDevice = 3,
    DeviceType_MAX = 4,
}

---@enum EAudioFadeModel
EAudioFadeModel = {
    InverseByDistance = 0,
    LinearByDistance = 1,
    ExponentialByDistance = 2,
    EAudioFadeModel_MAX = 3,
}

---@enum LoginState
LoginState = {
    LoggedOut = 0,
    LoggingIn = 1,
    LoggedIn = 2,
    LoggingOut = 3,
    LoginState_MAX = 4,
}

---@enum ParticipantSpeakingUpdateRate
ParticipantSpeakingUpdateRate = {
    StateChange = 0,
    Never = 1,
    Update1Hz = 2,
    Update5Hz = 3,
    Update10Hz = 4,
    ParticipantSpeakingUpdateRate_MAX = 5,
}

---@enum PresenceStatus
PresenceStatus = {
    Unavailable = 0,
    Available = 1,
    Chat = 2,
    DoNotDisturb = 3,
    Away = 4,
    ExtendedAway = 5,
    PresenceStatus_MAX = 6,
}

---@enum SubscriptionMode
SubscriptionMode = {
    Accept = 0,
    Block = 1,
    Defer = 2,
    SubscriptionMode_MAX = 3,
}

---@enum SubscriptionReply
SubscriptionReply = {
    Allow = 0,
    Block = 1,
    SubscriptionReply_MAX = 2,
}

---@enum TTSDestination
TTSDestination = {
    Default = 0,
    RemoteTransmission = 0,
    LocalPlayback = 1,
    RemoteTransmissionWithLocalPlayback = 2,
    QueuedRemoteTransmission = 3,
    QueuedLocalPlayback = 4,
    QueuedRemoteTransmissionWithLocalPlayback = 5,
    ScreenReader = 6,
    TTSDestination_MAX = 7,
}

---@enum TTSMessageState
TTSMessageState = {
    Playing = 0,
    Enqueued = 1,
    TTSMessageState_MAX = 2,
}

---@enum TransmissionMode
TransmissionMode = {
    None = 0,
    Single = 1,
    All = 2,
    TransmissionMode_MAX = 3,
}

