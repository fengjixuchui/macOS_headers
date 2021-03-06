//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenSharing/SSInputEventSource-Protocol.h>

@class RDSemaphore;
@protocol SSInputEventConsumer;

@interface SSEventHelperManager : NSObject <SSInputEventSource>
{
    NSObject<SSInputEventConsumer> *mInputEventConsumer;
    unsigned int mServerPort;
    unsigned int mClientPort;
    struct __CFRunLoopSource *mRunLoopSource;
    struct __CFMachPort *mCFMachPort;
    unsigned long long mLastModifierFlags;
    void *mReservedForInstanceVariables;
    RDSemaphore *mRFBEventHelperdLaunchSemaphore;
}

+ (id)sharedManager;
@property unsigned long long lastModifierFlags; // @synthesize lastModifierFlags=mLastModifierFlags;
@property(readonly, nonatomic) NSObject<SSInputEventConsumer> *inputEventConsumer; // @synthesize inputEventConsumer=mInputEventConsumer;
- (void)ssSetInputEventConsumer:(id)arg1;
- (void)ssStopInputEventSource;
- (void)ssStartInputEventSource;
- (void)stopKeyCapture;
- (void)captureSpecialKeys:(id)arg1;
- (void)dealloc;
- (id)init;

@end

