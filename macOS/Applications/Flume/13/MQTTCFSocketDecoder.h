//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSInputStream, NSString;

@interface MQTTCFSocketDecoder : NSObject <NSStreamDelegate>
{
    long long _state;
    NSError *_error;
    NSInputStream *_stream;
    id <MQTTCFSocketDecoderDelegate> _delegate;
}

@property(nonatomic) __weak id <MQTTCFSocketDecoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (void)dealloc;
- (void)open;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

