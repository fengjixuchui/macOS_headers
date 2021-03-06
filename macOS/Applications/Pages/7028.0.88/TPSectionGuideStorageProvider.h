//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDGuideStorageProvider-Protocol.h"

@class NSString, TPSection, TSDGuideStorage;

@interface TPSectionGuideStorageProvider : NSObject <TSDGuideStorageProvider>
{
    TPSection *_section;
    unsigned long long _pageIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) TPSection *section; // @synthesize section=_section;
@property(readonly, nonatomic) Class guideStorageCommandClass;
@property(readonly, nonatomic) TSDGuideStorage *guideStorage;
- (id)initWithSection:(id)arg1 pageIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

