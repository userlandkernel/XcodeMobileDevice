//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemFilter.h>

@class NSPredicate;

@interface _IDENavigableItemPredicateFilter : IDENavigableItemFilter
{
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
- (id)_initWithPredicate:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesNavigableItem:(id)arg1;
@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;

@end

