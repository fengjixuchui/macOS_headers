//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class NSString, UIPrintInfo;
@protocol UINSUserInterfaceTheme, UINSWindow;

@protocol UINSApplicationDelegate <NSObject>
@property(copy, nonatomic) CDUnknownBlockType printOrExportPanelWasDismissedCallback;
@property(nonatomic) BOOL nextPrintJobShouldExport;
@property(readonly) BOOL shouldSizeWindowsAutomatically;
@property(copy, nonatomic) CDUnknownBlockType appWillTerminateCallback;
@property(copy, nonatomic) CDUnknownBlockType backgroundTasksWillExpireCallback;
@property(copy, nonatomic) CDUnknownBlockType appSupportsMultiwindowCallback;
@property(copy, nonatomic) CDUnknownBlockType regionBlockingWindowDragCallback;
- (void)dismissPrintOrExportPanel;
- (void)showPrintOrExportPanelWithPrintInfo:(UIPrintInfo *)arg1 andPDFDocumentGenerator:(void (^)(NSDictionary *, void (^)(id <UINSPDFDocument>)))arg2;
- (void)uiKitWantsToExitProcessWithStatus:(int)arg1;
- (void)didCompleteAllBackgroundTasksAfterBackgrounding;
- (BOOL)shouldCloseWindowWithSceneIdentifier:(NSString *)arg1;
- (void)didDestroySceneWithSceneIdentifier:(NSString *)arg1;
- (void)didCreateSceneWithSceneIdentifier:(NSString *)arg1 persistentIdentifier:(NSString *)arg2;
- (id <UINSUserInterfaceTheme>)aquaTheme;
- (id <UINSWindow>)hostWindowForSceneIdentifier:(NSString *)arg1;
- (id <UINSWindow>)hostWindowForUIWindow:(id)arg1;
- (void)didReceiveLaunchActions;
@end

