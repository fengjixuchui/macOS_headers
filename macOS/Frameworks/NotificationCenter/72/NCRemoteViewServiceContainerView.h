//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class _NCMachSendRight;

__attribute__((visibility("hidden")))
@interface NCRemoteViewServiceContainerView : NSView
{
    _Bool _inSetFrame;
    _NCMachSendRight *_currentFence;
    _Bool _sendFrameChangesToHost;
    id <NCRemoteServiceContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sendFrameChangesToHost; // @synthesize sendFrameChangesToHost=_sendFrameChangesToHost;
@property(nonatomic) __weak id <NCRemoteServiceContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;

@end

