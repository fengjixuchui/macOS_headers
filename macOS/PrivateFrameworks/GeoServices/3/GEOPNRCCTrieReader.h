//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRCCTrieReader : NSObject
{
    struct _CFBurstTrie *_trie;
    NSData *_ccFile;
}

- (void).cxx_destruct;
- (id)lookupCCForPhNumber:(id)arg1;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end

