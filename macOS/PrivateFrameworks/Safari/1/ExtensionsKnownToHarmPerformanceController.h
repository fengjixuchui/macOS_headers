//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSRemotePlistController;

__attribute__((visibility("hidden")))
@interface ExtensionsKnownToHarmPerformanceController : NSObject
{
    WBSRemotePlistController *_remotePlistController;
}

- (void).cxx_destruct;
- (BOOL)shouldWarnAboutExtensionWithBundleIdentifier:(id)arg1 developerIdentifier:(id)arg2;
- (void)kickOffLoadOfExtensionsKnownToHarmPerformance;
- (id)initWithBuiltInListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 updateInterval:(double)arg3;

@end

