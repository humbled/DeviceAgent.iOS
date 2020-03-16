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

#import "XCTActivity-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

@interface XCActivityRecord : NSObject <NSSecureCoding, XCTActivity>
{
    BOOL _valid;
    BOOL _isTopLevel;
    BOOL _useLegacySerializationFormat;
    NSString *_title;
    NSString *_activityType;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    NSString *_aggregationIdentifier;
    double _subactivitiesDuration;
    NSMutableArray *_mutableAttachments;
}

@property(copy) NSString *activityType;
@property(copy) NSString *aggregationIdentifier;
@property(readonly, copy) NSArray *attachments;
@property(readonly) double duration;
@property(copy) NSDate *finish;
@property BOOL isTopLevel;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly) NSMutableArray *mutableAttachments;
@property(readonly, copy) NSString *name;
@property(copy) NSDate *start;
@property(copy) NSString *title;
@property BOOL useLegacySerializationFormat;
@property(copy) NSUUID *uuid;
@property(readonly) double subactivitiesDuration;

+ (BOOL)_shouldSaveAttachmentWithName:(id)arg1 lifetime:(NSInteger)arg2;
- (void)_decodeLegacyAttachments:(id)arg1;
- (void)_synchronized_addAttachment:(id)arg1;
- (id)_synchronized_attachmentForName:(id)arg1;
- (void)_synchronized_ensureValid;
- (void)_synchronized_removeAttachmentsWithName:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)addDiagnosticReportData:(id)arg1;
- (void)addLocalizableStringsData:(id)arg1;
- (void)addMemoryGraphData:(id)arg1;
- (void)addScreenImageData:(id)arg1 forceKeepAlways:(BOOL)arg2;
- (void)addSnapshot:(id)arg1;
- (void)addSynthesizedEvent:(id)arg1;
- (void)attachAutomaticScreenshotForDevice:(id)arg1;
- (id)attachmentForName:(id)arg1;
- (void)invalidate;
- (void)removeAttachmentsWithName:(id)arg1;
- (void)subactivityCompletedWithDuration:(double)arg1;


@end

