//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPStringFormat;

__attribute__((visibility("hidden")))
@interface FPPreflightUserInteractionAlert : NSObject
{
    BOOL _enableContinue;
    FPStringFormat *_titleFormat;
    FPStringFormat *_subtitleFormat;
    FPStringFormat *_continueCaptionFormat;
    FPStringFormat *_cancelCaptionFormat;
}

+ (id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL enableContinue; // @synthesize enableContinue=_enableContinue;
@property(retain, nonatomic) FPStringFormat *cancelCaptionFormat; // @synthesize cancelCaptionFormat=_cancelCaptionFormat;
@property(retain, nonatomic) FPStringFormat *continueCaptionFormat; // @synthesize continueCaptionFormat=_continueCaptionFormat;
@property(retain, nonatomic) FPStringFormat *subtitleFormat; // @synthesize subtitleFormat=_subtitleFormat;
@property(retain, nonatomic) FPStringFormat *titleFormat; // @synthesize titleFormat=_titleFormat;

@end

