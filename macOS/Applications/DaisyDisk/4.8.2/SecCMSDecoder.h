//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData;

@interface SecCMSDecoder : NSObject
{
    struct _CMSDecoder *_decoderRef;
}

+ (id)decoderWithData:(id)arg1;
@property(readonly, nonatomic) NSArray *certificateRefs;
@property(readonly, nonatomic) NSData *decodedData;
- (BOOL)finalizeMessage;
- (BOOL)updateMessageWithData:(id)arg1;
- (void)dealloc;
- (id)initWithDecoderRef:(struct _CMSDecoder *)arg1;

@end

