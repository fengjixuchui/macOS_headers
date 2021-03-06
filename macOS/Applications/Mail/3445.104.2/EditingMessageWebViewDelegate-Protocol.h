//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "WebEditingDelegate-Protocol.h"

@class AttachmentViewController, EditingMessageWebView, MCAttachment, NSArray, NSColor, NSDictionary, NSMenuItem, NSPasteboard, WebArchive, WebView;
@protocol NSValidatedUserInterfaceItem;

@protocol EditingMessageWebViewDelegate <WebEditingDelegate>
@property(readonly, nonatomic) BOOL selectionIsInList;
@property(nonatomic) BOOL allowsRichText;
@property(readonly, nonatomic) BOOL allowQuoting;
- (BOOL)validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg1;
- (BOOL)validateMenuItem:(NSMenuItem *)arg1;
- (void)insertBulletedList:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;

@optional
@property(nonatomic) BOOL shouldAttachFilesAtEnd;
@property(readonly, copy, nonatomic) NSArray *editedEditableElements;
- (void)saveDocument:(id)arg1;
- (void)webViewDidInsertRichText:(EditingMessageWebView *)arg1;
- (void)webViewWillInsertContentsOfWebpage:(EditingMessageWebView *)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(EditingMessageWebView *)arg1;
- (void)webViewMainDocumentBaseURIDidChange:(EditingMessageWebView *)arg1;
- (BOOL)webView:(EditingMessageWebView *)arg1 canInsertFromPasteboard:(NSPasteboard *)arg2 forDrag:(BOOL)arg3;
- (WebArchive *)webView:(EditingMessageWebView *)arg1 shouldReplaceSelectionWithWebArchive:(WebArchive *)arg2 givenAction:(long long)arg3;
- (void)webView:(WebView *)arg1 willRemoveMailAttachment:(AttachmentViewController *)arg2;
- (BOOL)webView:(EditingMessageWebView *)arg1 shouldInsertAttachments:(NSArray *)arg2 context:(NSDictionary *)arg3;
- (void)webView:(WebView *)arg1 didAddMailAttachment:(MCAttachment *)arg2;
- (void)removeAttachment:(MCAttachment *)arg1;
- (void)changeDocumentBackgroundColor:(NSColor *)arg1;
- (void)changeIndentationIfAllowed:(long long)arg1;
@end

