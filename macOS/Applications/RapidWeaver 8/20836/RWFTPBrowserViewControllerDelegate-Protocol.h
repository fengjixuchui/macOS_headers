//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, RWFTPBrowserViewController;

@protocol RWFTPBrowserViewControllerDelegate <NSObject>
- (void)browserViewControllerDidCancel:(RWFTPBrowserViewController *)arg1;
- (void)browserViewController:(RWFTPBrowserViewController *)arg1 didSelectPath:(NSString *)arg2;
- (void)browserViewController:(RWFTPBrowserViewController *)arg1 didEncounterError:(NSError *)arg2;
@end

