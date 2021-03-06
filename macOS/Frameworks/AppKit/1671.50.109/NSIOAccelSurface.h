//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIOSurfacePool, NSMapTable;

__attribute__((visibility("hidden")))
@interface NSIOAccelSurface : NSObject
{
    unsigned long long _registryID;
    unsigned int _surfaceID;
    struct _CGLContextObject *_context;
    unsigned int _format;
    unsigned int _type;
    int _width;
    int _height;
    unsigned int _fbo;
    unsigned int _sourceTexture;
    NSMapTable *_destinationTextures;
    NSIOSurfacePool *_surfacePool;
}

- (id)frontBuffer;
@property(readonly) unsigned int surfaceID;
@property(readonly) unsigned long long GPURegistryID;
- (void)dealloc;
- (id)initWithGPURegistryID:(unsigned long long)arg1 surfaceID:(unsigned int)arg2;

@end

