//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHMediaRequest;

@interface PHSingleMediaRequestContext : PHMediaRequestContext
{
    NSProgress *_progress;
    long long _type;
    BOOL _networkAccessAllowed;
    PHMediaRequest *_request;
    CDUnknownBlockType _progressHandler;
}

+ (long long)_indexOfAvProxyFromResources:(id)arg1 hasAdjustments:(BOOL)arg2 version:(long long)arg3;
+ (id)avProxyRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) PHMediaRequest *request; // @synthesize request=_request;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)progresses;
- (CDUnknownBlockType)progressHandler;
- (id)initialRequests;
- (BOOL)isSynchronous;
- (BOOL)isNetworkAccessAllowed;
- (long long)type;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 type:(long long)arg5 networkAccessAllowed:(BOOL)arg6 progressHandler:(CDUnknownBlockType)arg7 resultHandler:(CDUnknownBlockType)arg8;

@end

