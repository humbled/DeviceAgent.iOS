// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 12 2019 07:16:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>



@interface XCTAggregateSuiteRunStatisticsRecord : NSObject <NSSecureCoding>
{
    NSString *_suiteName;
    NSUInteger _executionCount;
    NSUInteger _skipCount;
    NSUInteger _failureCount;
    NSUInteger _unexpectedExceptionCount;
}

@property(readonly) NSUInteger executionCount;
@property(readonly) NSUInteger failureCount;
@property(readonly) NSUInteger skipCount;
@property(readonly) NSString *suiteName;
@property(readonly) NSUInteger unexpectedExceptionCount;

- (id)initWithSuiteName:(id)arg1 executionCount:(NSUInteger)arg2 skipCount:(NSUInteger)arg3 failureCount:(NSUInteger)arg4 unexpectedExceptionCount:(NSUInteger)arg5;
- (BOOL)isEqualToStatisticsRecord:(id)arg1;

@end

