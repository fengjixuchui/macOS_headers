//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TMAMediaBrowserViewController;

@protocol TMAMediaBrowserViewControllerDelegate <NSObject>
- (void)mediaBrowserViewController:(TMAMediaBrowserViewController *)arg1 didChooseMediaAtURLs:(NSArray *)arg2;
- (unsigned long long)mediaBrowserViewControllerMaxMediaItemFileSize:(TMAMediaBrowserViewController *)arg1;

@optional
- (void)mediaBrowserViewControllerDidEnterDraggingTarget:(TMAMediaBrowserViewController *)arg1;
@end

