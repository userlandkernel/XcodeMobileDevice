//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DVTIconSet : NSObject
{
    NSArray *_components;
}

+ (id)generateImageFromURL:(id)arg1 error:(id *)arg2;
+ (id)generateThumbnailFromURL:(id)arg1 targetSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly) NSArray *components; // @synthesize components=_components;
- (id)description;
- (id)generateImageReturningError:(id *)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

