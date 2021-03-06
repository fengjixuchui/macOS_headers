//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutProcessor-Protocol.h>

@class NSString;
@protocol SXUnitConverterFactory;

@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor>
{
    id <SXUnitConverterFactory> _unitConverterFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
- (void)finalizeLayoutBlueprint:(id)arg1 origin:(struct CGPoint)arg2 absoluteOrigin:(struct CGPoint)arg3;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithUnitConverterFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

