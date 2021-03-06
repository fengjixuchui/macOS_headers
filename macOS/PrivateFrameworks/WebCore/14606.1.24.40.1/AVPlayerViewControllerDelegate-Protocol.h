//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebCore/NSObject-Protocol.h>

@class AVPlayerViewController, NSError;

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional
- (void)playerViewController:(AVPlayerViewController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(BOOL))arg2;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
@end

