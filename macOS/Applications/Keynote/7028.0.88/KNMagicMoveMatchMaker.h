//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KNMagicMoveMatchMaker : NSObject
{
}

+ (id)p_layerAndContentsArrayByUpdatingMorphMatches:(id)arg1 withPercent:(double)arg2 animatedSlideView:(id)arg3 playbackSession:(id)arg4 generateSingleTextures:(BOOL)arg5 GLContext:(struct _CGLContextObject *)arg6 generateMetalTextures:(BOOL)arg7 metalEnvironment:(id)arg8;
+ (id)layerAndContentsArrayByUpdatingMorphMatches:(id)arg1 withPercent:(double)arg2 animatedSlideView:(id)arg3 playbackSession:(id)arg4 generateMetalTextures:(BOOL)arg5 metalEnvironment:(id)arg6;
+ (id)layerAndContentsArrayByUpdatingMorphMatches:(id)arg1 withPercent:(double)arg2 animatedSlideView:(id)arg3 playbackSession:(id)arg4 generateSingleTextures:(BOOL)arg5 GLContext:(struct _CGLContextObject *)arg6;
+ (id)magicMoveMatchesFromAnimatedSlideView:(id)arg1 toAnimatedSlideView:(id)arg2 outMorphMatches:(id)arg3 textDeliveryType:(long long)arg4 supportsMorphTextures:(BOOL)arg5 disableMatchesOnText:(BOOL)arg6 shouldFlattenTextures:(BOOL)arg7;
+ (id)newFlattenedAnimationMatchesFromAnimationMatches:(id)arg1 animationContext:(id)arg2 isPreview:(BOOL)arg3 metalContext:(id)arg4;
+ (id)newFlattenedAnimationMatchesFromAnimationMatches:(id)arg1 animationContext:(id)arg2 isPreview:(BOOL)arg3 GLState:(id)arg4;
+ (void)p_replaceFlattenedMatches:(id)arg1 withTexture:(id)arg2 inResult:(id)arg3;
+ (struct CATransform3D)p_transformWithTexture:(id)arg1 frameOnCanvas:(struct CGRect)arg2 actionBuildAngle:(double)arg3 forMetal:(BOOL)arg4;
+ (struct CGRect)p_frameWithTextures:(id)arg1 textureToActionBuildTextureAngleDict:(id)arg2 slideRect:(struct CGRect)arg3;
+ (id)p_textureToActionBuildTextureAngleDictWith:(id)arg1 animationContext:(id)arg2 isPreview:(BOOL)arg3;
+ (id)p_flattenableMatchesArrayWith:(id)arg1 forSlideRect:(struct CGRect)arg2;
+ (BOOL)canFlattenTexture:(id)arg1 forSlideRect:(struct CGRect)arg2;
+ (double)p_applyFinalActionBuildAttributesToTexture:(id)arg1 actionBuildAttributes:(id)arg2 animationContext:(id)arg3;
+ (id)p_animationMatchesFromMatch:(id)arg1 outMorphMatches:(id)arg2 fromASV:(id)arg3 toASV:(id)arg4 outgoingCanvas:(id)arg5 incomingCanvas:(id)arg6 ignoreOutgoingBuildVisibility:(BOOL)arg7 supportsMorphTextures:(BOOL)arg8;
+ (id)magicMoveMatchesWithOutgoingInfos:(id)arg1 incomingInfos:(id)arg2 outgoingCanvas:(id)arg3 incomingCanvas:(id)arg4 textDeliveryType:(long long)arg5 outgoingAnimatedSlideModel:(id)arg6 incomingAnimatedSlideModel:(id)arg7 ignoreOutgoingBuildVisibility:(BOOL)arg8 supportsMorphTextures:(BOOL)arg9 disableMatchesOnText:(BOOL)arg10;
+ (void)p_addContainedAttachmentsForRep:(id)arg1 containingRep:(id)arg2 canvas:(id)arg3 repsByClass:(out id)arg4 textOnlyReps:(out id)arg5 containingRepToAttachmentRepsMap:(out id)arg6 classNames:(out id)arg7 allReps:(out id)arg8;
+ (void)p_addCaptionsForRep:(id)arg1 canvas:(id)arg2 repsByClass:(out id)arg3 textOnlyReps:(out id)arg4 containingRepToAttachmentRepsMap:(out id)arg5 classNames:(out id)arg6 allReps:(out id)arg7;
+ (id)repToOpacityTextRangeDictMapWithOutgoingReps:(id)arg1 incomingReps:(id)arg2 outgoingAnimatedSlideModel:(id)arg3 incomingAnimatedSlideModel:(id)arg4 ignoreOutgoingBuildVisibility:(BOOL)arg5;
+ (id)p_magicMoveMatchesUsingAttributesForClass:(Class)arg1 outgoingObjects:(id)arg2 incomingObjects:(id)arg3 textureDescription:(id)arg4 textDeliveryType:(long long)arg5 outgoingAnimatedSlideModel:(id)arg6 incomingAnimatedSlideModel:(id)arg7 ignoreOutgoingBuildVisibility:(BOOL)arg8 disableMatchesOnText:(BOOL)arg9 shouldCheckShapeMatchWithoutText:(BOOL)arg10;
+ (id)p_separateOutgoingAndIncomingMagicMoveMatchesForClass:(Class)arg1 outgoingObjects:(id)arg2 incomingObjects:(id)arg3 textureDescription:(id)arg4 textDeliveryType:(long long)arg5 outgoingAnimatedSlideModel:(id)arg6 incomingAnimatedSlideModel:(id)arg7 ignoreOutgoingBuildVisibility:(BOOL)arg8;
+ (id)p_matchObjectWithRep:(id)arg1 model:(id)arg2 ignoreBuildVisibility:(BOOL)arg3;
+ (BOOL)isDrawableIgnored:(id)arg1;
+ (void)setDrawable:(id)arg1 isIgnored:(BOOL)arg2;
+ (long long)magicMoveMorphTexturesPerSecond;
+ (void)initialize;

@end

