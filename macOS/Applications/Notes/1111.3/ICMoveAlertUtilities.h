//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICMoveAlertUtilities : NSObject
{
}

+ (void)postAlertForFolderDepthLimit;
+ (void)postAlertForMovingLockedNotesToUnsupportedAccountIsCopy:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)postAlertForMovingSharedNotesToAnotherAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)postAlertForMovingNotesContainingSharedNotesToSharedFolder:(id)arg1 destination:(id)arg2 shareHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
+ (void)postAlertForMovingFolderWithSharedNotes:(id)arg1 sharedSubfolders:(id)arg2 destination:(id)arg3 shareHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;
+ (void)postAlertForSharingFolderWithSharedNotes:(id)arg1 sharedSubfolders:(id)arg2 shareHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
+ (void)postAlertForOwnerStoppedSharingCurrentFolderWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)postAlertForSharingFolderContainingLockedOrJoinedRootObjectsWithGuiltyObjects:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
+ (void)postAlertForMovingLockedOrSingleJoinedNotesToSharedFolderWithCountOfNotes:(unsigned long long)arg1 guiltyObjects:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)postAlertWithProceedAndCancelButtonsWithTitle:(id)arg1 message:(id)arg2 proceedTitle:(id)arg3 proceedHandler:(CDUnknownBlockType)arg4 cancelHandler:(CDUnknownBlockType)arg5;
+ (void)postAlertWithOKButtonWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

