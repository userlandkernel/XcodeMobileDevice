//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface _IDELocalizationXLIFFTextualRepresentation : NSObject
{
    NSMutableString *_representation;
}

- (void).cxx_destruct;
- (struct _NSRange)appendGap;
- (struct _NSRange)appendResource:(id)arg1 translationUnits:(id)arg2;
- (void)appendResourceEnd:(id)arg1;
- (void)appendResourceStart:(id)arg1;
- (struct _NSRange)appendTranslationUnit:(id)arg1;
- (BOOL)createDirectoryAndWriteToURL:(id)arg1 error:(id *)arg2;
- (id)init;
- (unsigned long long)length;
@property(retain) NSMutableString *representation; // @synthesize representation=_representation;

@end

