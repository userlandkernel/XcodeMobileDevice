//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray;

@interface IDESelection : NSObject <NSCopying>
{
    NSArray *_navigableItemArchivableRepresentations;
}

+ (id)selectionWithNavigableItemArchivableRepresentations:(id)arg1;
+ (id)selectionWithNavigableItems:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithNavigableItemArchivableRepresentations:(id)arg1;
@property(readonly, copy) NSArray *navigableItemArchivableRepresentations; // @synthesize navigableItemArchivableRepresentations=_navigableItemArchivableRepresentations;

@end

