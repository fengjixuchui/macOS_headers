//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXNavigationParticipatingViewController.h"

#import "IPXAssetTransitioning-Protocol.h"
#import "IPXBurstFavoriteOverlayControllerDelegate-Protocol.h"
#import "IPXBurstSecondaryToolbarDelegate-Protocol.h"
#import "IPXSelectionContainerProvider-Protocol.h"
#import "IPXSummaryViewDelegate-Protocol.h"
#import "IPXViewerContainerViewDelegate-Protocol.h"
#import "IPXViewerControllerDelegate-Protocol.h"
#import "IPXZoomSliderCellValueFormatterDelegate-Protocol.h"
#import "NSMenuItemValidation-Protocol.h"

@class IPXBurstFavoritesViewController, IPXBurstSecondaryToolbarViewController, IPXEditorSummaryController, IPXOneUpSelectionController, IPXSelectionContainer, IPXSummaryViewController, IPXViewerContainerView, IPXViewerController, IPXViewerModel, IPXZoomSlider, NSOrderedSet, NSString, PLAvalanche, PXAssetReference, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource;
@protocol IPXBurstBrowserControllerDelegate, PLAssetContainer;

__attribute__((visibility("hidden")))
@interface IPXBurstBrowserController : IPXNavigationParticipatingViewController <IPXBurstSecondaryToolbarDelegate, IPXZoomSliderCellValueFormatterDelegate, IPXAssetTransitioning, IPXSelectionContainerProvider, IPXSummaryViewDelegate, IPXViewerContainerViewDelegate, IPXViewerControllerDelegate, IPXBurstFavoriteOverlayControllerDelegate, NSMenuItemValidation>
{
    PXPhotosDataSource *_photosDataSource;
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
    IPXOneUpSelectionController *_selectionController;
    IPXViewerModel *_viewerModel;
    PLAvalanche *_burstController;
    PXAssetReference *_representingAssetReference;
    NSOrderedSet *_originallyFavoritedAssets;
    id <PLAssetContainer> _assetContainer;
    IPXZoomSlider *_zoomSlider;
    IPXBurstSecondaryToolbarViewController *_secondaryToolbarViewController;
    IPXViewerContainerView *_containerView;
    IPXViewerController *_viewerController;
    IPXBurstFavoritesViewController *_burstFavoritesController;
    IPXSummaryViewController *_summaryViewController;
    IPXEditorSummaryController *_editorSummaryController;
    BOOL _viewDidTransition;
    id <IPXBurstBrowserControllerDelegate> _burstDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IPXBurstBrowserControllerDelegate> burstDelegate; // @synthesize burstDelegate=_burstDelegate;
- (id)makeTouchBar;
- (double)percentForZoomValue:(double)arg1;
- (void)didTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (void)willTransitionFromController:(id)arg1 toController:(id)arg2 items:(id)arg3;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
@property(readonly, nonatomic) IPXSelectionContainer *selectionContainer;
- (void)bottomButtonClickedInContainerView:(id)arg1;
- (void)topButtonClickedInContainerView:(id)arg1;
- (void)trailingButtonClickedInContainerView:(id)arg1;
- (void)leadingButtonClickedInContainerView:(id)arg1;
- (BOOL)isBottomButtonHiddenInContainerView:(id)arg1;
- (BOOL)isTopButtonHiddenInContainerView:(id)arg1;
- (BOOL)isTrailingButtonHiddenInContainerView:(id)arg1;
- (BOOL)isLeadingButtonHiddenInContainerView:(id)arg1;
- (void)setZoomValue:(double)arg1;
- (double)zoomValue;
- (struct NSEdgeInsets)viewerControllerPreferredPreviewInsets:(id)arg1;
- (void)viewerController:(id)arg1 didZoom:(double)arg2 event:(id)arg3;
- (void)viewerController:(id)arg1 willAddItemController:(id)arg2;
- (BOOL)viewerController:(id)arg1 shouldAllowDraggingForItem:(id)arg2;
- (void)viewerController:(id)arg1 setupNewItemController:(id)arg2;
- (void)viewerController:(id)arg1 didReplacePrimaryItemController:(id)arg2;
- (unsigned long long)burstPickCount;
- (unsigned long long)burstItemCount;
- (void)cancelModalSelection;
- (void)_dismissBurstBrowserController;
- (void)_completeBurstSelection;
- (void)endModalSelection;
- (void)burstFavoriteOverlayController:(id)arg1 burstFavorited:(id)arg2;
- (void)_updateViewerControllerEdgeInsetsWithBottomInset:(double)arg1;
- (void)_updateViewerControllerEdgeInsets;
- (void)_updateRolloverControls;
- (void)_updateSubcontrollersOverlaysIfNeeded;
- (void)windowDidExitFullScreen;
- (void)windowDidEnterFullScreen;
- (void)windowWillExitFullScreen;
- (void)windowWillEnterFullScreen;
- (void)_updateBackgroundAppearanceForFullScreen:(BOOL)arg1;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (id)preferredFirstResponder;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_setupNavigationBar;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)viewDidTransitionInWithContext:(id)arg1;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_requiresWindowForTransitionPreparation;
- (void)_setupSubviews;
- (void)didUpdateLayoutGuides;
- (void)loadView;
- (id)initWithRepresentingAssetReference:(id)arg1 mediaProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

