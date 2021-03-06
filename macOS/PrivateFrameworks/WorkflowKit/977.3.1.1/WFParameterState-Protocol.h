//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class NSArray, WFParameter, WFVariable;
@protocol WFVariableDataSource;

@protocol WFParameterState <NSCopying, WFVariableSerialization>
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg3 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg4;
- (NSArray *)containedVariables;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@optional
- (id)initWithVariable:(WFVariable *)arg1;
@end

