//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AirPlayReceiverPlatform : NSObject
{
    // Error parsing type: ^{AirPlayReceiverServerPrivate={__CFRuntimeBase=QAQ}^v@i^{OpaqueAPAdvertiser}CC^{HTTPServerPrivate}@^{HTTPServerPrivate}[16C]fCiCC@IQ^{OpaqueAPReceiverSystemInfo}CC^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}IiI^{APReceiverSessionManagerOpaque}^{OpaqueFigValeria}^?^{__CFString}^{__CFString}CCCCCCC}, name: _server
    int _uiErrorNotifyToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    unsigned char _isMuted;
    float _volumeSliderValueBeforeMute;
    unsigned char _isAmbientAudioPlaying;
    unsigned char _isMediaAudioPlaying;
    unsigned char _isVideoPlaying;
}

@property(nonatomic) unsigned char isVideoPlaying; // @synthesize isVideoPlaying=_isVideoPlaying;
@property(nonatomic) unsigned char isMediaAudioPlaying; // @synthesize isMediaAudioPlaying=_isMediaAudioPlaying;
@property(nonatomic) unsigned char isAmbientAudioPlaying; // @synthesize isAmbientAudioPlaying=_isAmbientAudioPlaying;

@end

