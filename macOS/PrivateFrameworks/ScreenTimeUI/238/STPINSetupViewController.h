//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSTextField, NSURL, STPINRemoteViewController;

@interface STPINSetupViewController : NSViewController
{
    NSTextField *_errorField;
    CDUnknownBlockType _setupHandler;
    long long _mode;
    NSURL *_userIDRepresentation;
    STPINRemoteViewController *_remoteViewController;
}

+ (id)newViewControllerWithUser:(id)arg1 forMode:(long long)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) STPINRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, copy) NSURL *userIDRepresentation; // @synthesize userIDRepresentation=_userIDRepresentation;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property(readonly, copy) CDUnknownBlockType setupHandler; // @synthesize setupHandler=_setupHandler;
@property(retain) NSTextField *errorField; // @synthesize errorField=_errorField;
- (void)loadView;

@end

