//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSSet, NSURL;

@protocol WBSSandboxExtensionToken
@property(readonly, nonatomic) NSURL *shortestAccessibleURL;
@property(readonly, nonatomic) BOOL stopAccessingRequestURLWhenDone;
@property(readonly, nonatomic) NSURL *requestURL;
@property(readonly, copy, nonatomic) NSSet *urls;
- (BOOL)isValid;
- (void)invalidate;
@end

