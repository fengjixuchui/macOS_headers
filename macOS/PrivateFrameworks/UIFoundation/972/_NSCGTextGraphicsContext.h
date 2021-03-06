//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextGraphicsContextInternal.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSCGTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>
{
    struct CGContext *_context;
}

+ (id)graphicsContextForApplicationFrameworkContext:(long long)arg1;
- (void)restoreGraphicsState;
- (void)saveGraphicsState;
@property(readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property(readonly, getter=isFlipped) BOOL flipped;
@property(readonly) struct CGContext *CGContext;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

