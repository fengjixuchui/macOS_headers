//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerRemoteNavigationController : UINavigationController
{
    BOOL _initialized;
    id <PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerdelegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInitialized) BOOL initialized; // @synthesize initialized=_initialized;
@property(nonatomic) __weak id <PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerdelegate; // @synthesize remoteViewControllerdelegate=_remoteViewControllerdelegate;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithRootViewController:(id)arg1;

@end

