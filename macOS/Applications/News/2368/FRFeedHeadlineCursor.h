//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRArticlePageViewController, FRArticleViewHeadlineContext;

@interface FRFeedHeadlineCursor : NSObject
{
    FRArticleViewHeadlineContext *_headlineContext;
    FRArticlePageViewController *_pageViewController;
}

@property(nonatomic) __weak FRArticlePageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(copy, nonatomic) FRArticleViewHeadlineContext *headlineContext; // @synthesize headlineContext=_headlineContext;
- (void).cxx_destruct;
- (BOOL)_shouldShowHeadline:(id)arg1;
- (BOOL)_updateHeadlineAdvancingForward:(BOOL)arg1;
- (BOOL)previousHeadline;
- (BOOL)nextHeadline;
- (id)initWithHeadlineContext:(id)arg1 pageViewController:(id)arg2;
- (id)init;

@end

