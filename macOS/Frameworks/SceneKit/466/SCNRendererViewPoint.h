//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject
{
    MTLRenderPassDescriptor *passDescriptor;
    CDStruct_4b2885c7 viewport;
    struct CATransform3D viewMatrix;
    struct CATransform3D projectionMatrix;
}

@property(nonatomic) CDStruct_4b2885c7 viewport; // @synthesize viewport;
@property(retain, nonatomic) MTLRenderPassDescriptor *passDescriptor; // @synthesize passDescriptor;
@property(nonatomic) struct CATransform3D projectionMatrix; // @synthesize projectionMatrix;
@property(nonatomic) struct CATransform3D viewMatrix; // @synthesize viewMatrix;
- (void)dealloc;

@end

