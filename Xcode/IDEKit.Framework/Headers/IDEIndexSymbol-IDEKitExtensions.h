//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexSymbol.h>

@interface IDEIndexSymbol (IDEKitExtensions)
- (id)completionText;
- (id)descriptionText;
- (id)displayText;
- (id)displayType;
- (double)fuzzyMatchingScore;
- (id)icon;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)largeIcon;
- (BOOL)notRecommended;
- (id)parentText;
- (long long)priority;
- (long long)priorityBucket;
- (unsigned long long)priorityComparatorKind;
- (void)setFuzzyMatchingScore:(double)arg1;
- (void)setPriority:(long long)arg1;
@end
