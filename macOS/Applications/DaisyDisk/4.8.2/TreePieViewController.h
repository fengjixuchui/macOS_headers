//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReportViewControllerProtocol.h"
#import "TreePieViewDelegate.h"

@class DirectoryItem, NSMenu, NSView, TreePieView;

@interface TreePieViewController : NSObject <TreePieViewDelegate, ReportViewControllerProtocol>
{
    DirectoryItem *_currDir;
    id <ColorSchemeProtocol> _colorScheme;
    id <TreePieViewControllerDelegate> _delegate;
    NSView *_treePieContainer;
    TreePieView *_treePieView;
}

@property(retain, nonatomic) TreePieView *treePieView; // @synthesize treePieView=_treePieView;
@property(retain, nonatomic) NSView *treePieContainer; // @synthesize treePieContainer=_treePieContainer;
@property(retain, nonatomic) id <TreePieViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) DirectoryItem *currDir; // @synthesize currDir=_currDir;
@property(retain, nonatomic) id <ColorSchemeProtocol> colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMenu *contextMenu;
- (void)showPackageContentsForItem:(id)arg1 withAnimation:(BOOL)arg2;
- (id)windowFrameOfItem:(id)arg1 accountOnAnimation:(BOOL)arg2;
- (id)windowLocationOfItem:(id)arg1 accountOnAnimation:(BOOL)arg2;
- (void)updateMouseTracking;
- (void)setIgnoresMouseMove:(BOOL)arg1;
@property(readonly, nonatomic) NSView *rootView;
@property(readonly, nonatomic) double treePieAngle;
- (void)blossomOut;
- (void)treePieViewWantsUnblockUserInput:(id)arg1;
- (void)treePieViewWantsBlockUserInput:(id)arg1;
- (void)treePieViewNavigationAnimationDidComplete:(id)arg1;
- (void)treePieViewDrillDownAnimationDidFadeOut:(id)arg1;
- (void)treePieViewMouseDidFirstMove:(id)arg1;
- (void)treePieViewMouseDidExit:(id)arg1;
- (void)treePieViewUserWillRequestContextMenu:(id)arg1;
- (void)treePieView:(id)arg1 userDidStartDraggingItem:(id)arg2 initialLocation:(struct CGPoint)arg3 event:(id)arg4;
- (void)treePieView:(id)arg1 userDidCommandClickItem:(id)arg2;
- (void)treePieView:(id)arg1 userDidClickItem:(id)arg2;
- (void)treePieViewDidRequestRefreshSelection:(id)arg1;
- (void)treePieView:(id)arg1 userDidSelectItem:(id)arg2;
@property(nonatomic) double width;
- (double)calculateHeightForWidth:(double)arg1;
- (double)calculateWidthForHeight:(double)arg1;
- (double)scopebarHeight;
@property(readonly, nonatomic) NSView *view;
- (void)delegateWantsFirstMouseMove;
- (void)completeManipulationAnimationsUnlessCanCancelRemovingItem:(id)arg1;
- (void)insertItem:(id)arg1 isUndraggable:(BOOL)arg2;
- (void)removeItem:(id)arg1 isUndraggable:(BOOL)arg2;
- (void)zoomSelectedItem;
- (struct CGRect)selectedItemIconFrame;
- (void)selectItem:(id)arg1;
@property(readonly, nonatomic) BOOL isManipulating;
- (void)rebuildTreePie;
- (void)setCurrentDirectory:(id)arg1 collapsePackageItems:(id)arg2 expandPackageItems:(id)arg3 withAnimation:(BOOL)arg4;
- (void)setTopmostDirectory:(id)arg1 treePieAngle:(double)arg2 hasBeenViewedOnce:(BOOL)arg3;
- (void)awakeFromNib;

@end

