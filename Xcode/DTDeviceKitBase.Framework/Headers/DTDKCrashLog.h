//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSMutableSet, NSString;

@interface DTDKCrashLog : NSManagedObject
{
}

+ (id)entityName;
+ (id)keyPathsForValuesAffectingDateString;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingFilename;
+ (id)keyPathsForValuesAffectingRawText;
+ (id)keyPathsForValuesAffectingText;
@property(readonly, nonatomic) NSString *dateString;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *filename;
@property(retain, nonatomic) NSString *rawText;
- (void)resymbolicate;
@property(retain, nonatomic) NSString *text;
- (void)symbolicate;
- (void)updateModelLayout;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *binaryImages; // @dynamic binaryImages;
@property(retain, nonatomic) NSString *crashReporterKey; // @dynamic crashReporterKey;
@property(retain, nonatomic) NSDate *dateTime; // @dynamic dateTime;
@property(retain, nonatomic) NSString *incidentIdentifier; // @dynamic incidentIdentifier;
@property(retain) NSManagedObject *logText; // @dynamic logText;
@property(nonatomic) BOOL needsSymbolication; // @dynamic needsSymbolication;
@property(retain) NSString *primitiveRawText; // @dynamic primitiveRawText;
@property(retain) NSString *primitiveText; // @dynamic primitiveText;
@property(retain, nonatomic) NSString *processName; // @dynamic processName;
@property(retain) NSManagedObject *rawLogText; // @dynamic rawLogText;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *udid; // @dynamic udid;

@end

