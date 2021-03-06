//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVQueryType, DVResultsOutlineViewController;

@interface DVQueryCategoryCell : NSTextFieldCell
{
    DVQueryType *m_categoryItem;
    BOOL showMore;
    unsigned long long m_totalItemCount;
    unsigned long long m_limitedItemCount;
    DVResultsOutlineViewController *controller;
}

+ (void)resetButtonCache;
+ (id)showMoreLessButtons;
@property(retain, nonatomic) DVQueryType *categoryItem; // @synthesize categoryItem=m_categoryItem;
@property(retain, nonatomic) DVResultsOutlineViewController *controller; // @synthesize controller;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)initWithItem:(id)arg1 controller:(id)arg2;
@property(nonatomic) unsigned long long limitedItemCount; // @synthesize limitedItemCount=m_limitedItemCount;
@property(nonatomic) BOOL showMore; // @synthesize showMore;
@property(nonatomic) unsigned long long totalItemCount; // @synthesize totalItemCount=m_totalItemCount;
- (id)showMoreLessButton;

@end

