//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCoding-Protocol.h>
#import <GPUToolsServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL;

@interface DYGuestApp : NSObject <NSCoding, NSCopying>
{
    unsigned long long _kind;
    NSMutableArray *_argumentEntries;
    NSMutableArray *_environmentEntries;
    NSMutableArray *_mutableEnvironmentEntries;
    NSString *_title;
    _Bool _useDeferredLaunch;
    BOOL _applyShellTokenizationToArguments;
    NSURL *_url;
    NSURL *_trueBinary;
    NSURL *_hostURL;
    NSDictionary *_infoPlist;
    NSString *_bundleIdentifier;
    NSString *_currentWorkingDirectory;
    unsigned long long _launchArchitecture;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingPath;
+ (id)keyPathsForValuesAffectingUrl;
- (void).cxx_destruct;
- (id)_applyShellProcessingOnArgumentValue:(id)arg1;
- (id)_initNoAlloc;
@property(nonatomic) BOOL applyShellTokenizationToArguments; // @synthesize applyShellTokenizationToArguments=_applyShellTokenizationToArguments;
@property(readonly, nonatomic) NSArray *arguments;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *currentWorkingDirectory; // @synthesize currentWorkingDirectory=_currentWorkingDirectory;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *environment; // @dynamic environment;
@property(retain, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isArchitectureAvailable:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(nonatomic) unsigned long long launchArchitecture; // @synthesize launchArchitecture=_launchArchitecture;
@property(readonly, nonatomic) NSMutableArray *mutableEnvironmentEntries; // @synthesize mutableEnvironmentEntries=_mutableEnvironmentEntries;
@property(copy, nonatomic) NSString *path;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSURL *trueBinary; // @synthesize trueBinary=_trueBinary;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool useDeferredLaunch; // @synthesize useDeferredLaunch=_useDeferredLaunch;

// Remaining properties
@property(copy, nonatomic) NSArray *argumentEntries; // @dynamic argumentEntries;
@property(copy, nonatomic) NSArray *environmentEntries; // @dynamic environmentEntries;
@property(readonly, nonatomic) NSMutableArray *mutableArgumentEntries; // @dynamic mutableArgumentEntries;

@end

