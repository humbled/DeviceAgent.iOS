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

@class NSDictionary;

@interface XCTMeasureOptions : NSObject
{
    BOOL _enableParallelizedSampling;
    BOOL _scheduleKickOffOnNewThread;
    BOOL _allowContinuousSampling;
    BOOL _discardFirstIteration;
    NSUInteger _invocationOptions;
    NSUInteger _iterationCount;
}

@property(nonatomic) BOOL allowConcurrentIterations;
@property(nonatomic) BOOL allowContinuousSampling;
@property(nonatomic) BOOL discardFirstIteration;
@property(readonly, nonatomic) NSUInteger instrumentAutomatic;
@property(readonly, nonatomic) NSDictionary *instrumentOptions;
@property(nonatomic) NSUInteger invocationOptions;
@property(nonatomic) NSUInteger iterationCount;

+ (id)defaultOptions;
- (id)initWithInstrumentOptionsDictionary:(id)arg1;

@end

