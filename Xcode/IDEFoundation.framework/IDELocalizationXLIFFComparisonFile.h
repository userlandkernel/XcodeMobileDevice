//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTComparisonDocumentLocation, NSString;

@interface IDELocalizationXLIFFComparisonFile : NSObject
{
    BOOL _foundInProject;
    NSString *_original;
    DVTComparisonDocumentLocation *_location;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(readonly) BOOL foundInProject; // @synthesize foundInProject=_foundInProject;
- (id)initWithOriginal:(id)arg1 oldLocation:(id)arg2 newLocation:(id)arg3 foundInProject:(BOOL)arg4;
@property(readonly) DVTComparisonDocumentLocation *location; // @synthesize location=_location;
@property(readonly) NSString *original; // @synthesize original=_original;

@end

