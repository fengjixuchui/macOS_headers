//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAStorePKArchive.h"

@interface MAStorePKMutableArchive : MAStorePKArchive
{
}

- (BOOL)setFile:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (BOOL)setData:(id)arg1 forPath:(id)arg2 compressed:(BOOL)arg3;
- (id)initForWritingToPath:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initForWritingToPath:(id)arg1 error:(id *)arg2;
- (BOOL)addSignatureBySigningWithIdentity:(struct OpaqueSecIdentityRef *)arg1 algorithm:(id)arg2;

@end

