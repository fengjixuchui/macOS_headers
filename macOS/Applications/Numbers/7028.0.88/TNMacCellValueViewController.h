//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TNMacHorizontalScrollButtonsDelegate-Protocol.h"
#import "TNMacPassiveContentProvider-Protocol.h"

@class NSImageView, NSLayoutConstraint, NSOperationQueue, NSScrollView, NSString, NSTextField, NSTimer, NSView, TNMacHorizontalScrollButtonsViewController, TSDInteractiveCanvasController, TSKMacDividerView, TSTCellEditingController, TSTCellSelection, TSTTableInfo;
@protocol TSTCellEditorHost;

@interface TNMacCellValueViewController : NSViewController <TNMacPassiveContentProvider, TNMacHorizontalScrollButtonsDelegate>
{
    BOOL _displayingPlaceholderToolTip;
    BOOL _firstFormulaDisplay;
    BOOL _timerFired;
    BOOL _didRenderFormulaForCurrentSelection;
    BOOL _formulaValueWasFromSelection;
    NSTextField *_labelTextField;
    NSTextField *_valueTextField;
    NSScrollView *_scrollView;
    TSTTableInfo *_tableInfo;
    TSTCellSelection *_selection;
    NSView *_scrollButtonsContainerView;
    TSKMacDividerView *_dividerView;
    NSLayoutConstraint *_valueTextFieldVerticalAlignmentConstraint;
    NSTimer *_formulaUpdateTimer;
    TNMacHorizontalScrollButtonsViewController *_scrollButtonsViewController;
    NSImageView *_errorImageView;
    TSDInteractiveCanvasController *_icc;
    id <TSTCellEditorHost> _cellEditorHost;
    NSOperationQueue *_formulaRenderingOperationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *formulaRenderingOperationQueue; // @synthesize formulaRenderingOperationQueue=_formulaRenderingOperationQueue;
@property(nonatomic) __weak id <TSTCellEditorHost> cellEditorHost; // @synthesize cellEditorHost=_cellEditorHost;
@property(nonatomic) __weak TSDInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(nonatomic) BOOL formulaValueWasFromSelection; // @synthesize formulaValueWasFromSelection=_formulaValueWasFromSelection;
@property(retain, nonatomic) NSImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(nonatomic) BOOL didRenderFormulaForCurrentSelection; // @synthesize didRenderFormulaForCurrentSelection=_didRenderFormulaForCurrentSelection;
@property(retain, nonatomic) TNMacHorizontalScrollButtonsViewController *scrollButtonsViewController; // @synthesize scrollButtonsViewController=_scrollButtonsViewController;
@property(nonatomic) BOOL timerFired; // @synthesize timerFired=_timerFired;
@property(retain, nonatomic) NSTimer *formulaUpdateTimer; // @synthesize formulaUpdateTimer=_formulaUpdateTimer;
@property(nonatomic) BOOL firstFormulaDisplay; // @synthesize firstFormulaDisplay=_firstFormulaDisplay;
@property(nonatomic) BOOL displayingPlaceholderToolTip; // @synthesize displayingPlaceholderToolTip=_displayingPlaceholderToolTip;
@property(retain, nonatomic) NSLayoutConstraint *valueTextFieldVerticalAlignmentConstraint; // @synthesize valueTextFieldVerticalAlignmentConstraint=_valueTextFieldVerticalAlignmentConstraint;
@property(retain, nonatomic) TSKMacDividerView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) NSView *scrollButtonsContainerView; // @synthesize scrollButtonsContainerView=_scrollButtonsContainerView;
@property(retain, nonatomic) TSTCellSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(retain, nonatomic) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
- (id)p_valueFont;
- (id)p_labelFont;
- (id)p_labelAttributes;
- (id)p_valueAttributesForCell:(id)arg1;
- (id)p_valueAttributes;
- (id)p_attributedStringWithImageAttachment:(id)arg1;
- (id)p_storageAsImage:(id)arg1 viewHeight:(double)arg2 screenScale:(double)arg3;
- (void)p_renderFormulaInCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 andUpdateWithLabel:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (id)p_valueStringForEditingFormulaCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 outIsError:(char *)arg3;
- (id)p_labelStringForFormulaCell:(id)arg1 isEditing:(BOOL)arg2;
- (id)p_valueStringForCell:(id)arg1 isEditing:(BOOL)arg2;
- (id)p_labelStringForCell:(id)arg1 isEditing:(BOOL)arg2;
- (void)p_updateDisplayForFormulaCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 isEditing:(BOOL)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)p_updateDisplayForCategoriesCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)p_updateDisplayForStockCell:(id)arg1 cellID:(struct TSUCellCoord)arg2 isEditing:(BOOL)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)p_updateDisplayForCell:(id)arg1 isEditing:(BOOL)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)p_updateFormulaFromTimer;
- (void)p_formulaDidEvaluate:(id)arg1;
- (void)p_didChangeCurrentEditor:(id)arg1;
- (struct CGRect)leftScrollRect;
- (struct CGRect)rightScrollRect;
- (void)canvasReadyForDisplayUpdate;
- (void)updateDisplayForInfo:(id)arg1;
@property(readonly, nonatomic) TSTCellEditingController *cellEditingController;
- (void)p_setErrorGlyphVisible:(BOOL)arg1;
- (void)viewDidLoad;
- (void)teardown;
- (id)initWithInteractiveCanvasController:(id)arg1 cellEditorHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

