//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYCaptureSessionInfo, NSURL;

@interface DysonSourceGenerator : NSObject
{
    BOOL _skipOptionalFunctions;
    BOOL _shouldFilterAppleInternalContexts;
    BOOL _emitErrorChecks;
    NSURL *_outputURL;
    NSURL *_sourceDirectoryURL;
    DYCaptureSessionInfo *_captureSessionInfo;
}

+ (void)_registerGenerator:(Class)arg1;
+ (void)_registerGenerators;
+ (id)availableGenerators;
+ (Class)generatorForIdentifier:(id)arg1;
+ (id)identifier;
- (void).cxx_destruct;
- (void)_createOutputDirectory;
@property(nonatomic) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
- (void)dealloc;
@property(nonatomic) BOOL emitErrorChecks; // @synthesize emitErrorChecks=_emitErrorChecks;
- (id)init;
- (id)initWithOutputURL:(id)arg1;
@property(readonly, retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (id)pathForResource:(id)arg1;
- (void)processArchive:(id)arg1;
@property(nonatomic) BOOL shouldFilterAppleInternalContexts; // @synthesize shouldFilterAppleInternalContexts=_shouldFilterAppleInternalContexts;
@property(nonatomic) BOOL skipOptionalFunctions; // @synthesize skipOptionalFunctions=_skipOptionalFunctions;
@property(readonly, retain, nonatomic) NSURL *sourceDirectoryURL; // @synthesize sourceDirectoryURL=_sourceDirectoryURL;

@end
