//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IDEMediaType : NSObject <NSCopying>
{
}

+ (id)sharedInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSString *displayName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMediaType:(id)arg1;
- (BOOL)isKindOfMediaType:(id)arg1;
@property(readonly) Class mediaResourceClass;
@property(readonly) NSString *pasteboardType;
@property(readonly) NSArray *pasteboardTypes;

@end

