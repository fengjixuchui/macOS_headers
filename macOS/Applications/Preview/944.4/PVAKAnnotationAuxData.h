//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageModelController;

@interface PVAKAnnotationAuxData : NSObject
{
    unsigned long long _pageIndex;
    AKPageModelController *_pageModelController;
}

@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (id)initWithPageIndex:(unsigned long long)arg1 andPageModelController:(id)arg2;

@end

