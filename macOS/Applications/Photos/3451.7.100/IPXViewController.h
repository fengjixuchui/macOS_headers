//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "IPXPlaceholderViewHelperDataSource-Protocol.h"
#import "IPXPlaceholderViewHelperDelegate-Protocol.h"

@class IPXWorkspaceController, NSString;

@interface IPXViewController : UXViewController <IPXPlaceholderViewHelperDataSource, IPXPlaceholderViewHelperDelegate>
{
    int _activityState;
}

- (void)notifyContentReady;
- (void)removeFromParentViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)_transitionToActivityState:(int)arg1;
- (void)didBecomeInactive;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (void)willBecomeActive;
@property(readonly, nonatomic) struct NSEdgeInsets viewContentInsets;
- (void)addFullBoundsSubview:(id)arg1;
- (void)removeFromHierarchy;
- (void)loadView;
- (void)embedViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;
- (void)snapshotMemoriesMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)writeAdditonalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id *)arg3;
- (id)prepareMetadataSnapshotOutputFolderWithAnalysisServiceClient:(id)arg1 error:(id *)arg2;
- (id)photoAnalysisServiceClient;
- (void)placeholderViewHelperDidSelectActionButton;
@property(readonly, nonatomic) unsigned long long placeholderProgressIndicatorStyle;
@property(readonly, nonatomic, getter=isPlaceholderProgressIndicatorVisible) BOOL placeholderProgressIndicatorVisible;
@property(readonly, nonatomic) NSString *placeholderButtonTitle;
@property(readonly, nonatomic) NSString *placeholderMessage;
@property(readonly, nonatomic) NSString *placeholderTitle;
@property(readonly, nonatomic, getter=isPlaceholderVisible) BOOL placeholderVisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

