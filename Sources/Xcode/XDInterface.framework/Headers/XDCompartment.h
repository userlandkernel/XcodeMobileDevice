//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XDInterface/NSCoding-Protocol.h>

@class NSColor, NSImage, NSString, XDCompartmentGraphic, XDCompartmentItem;

@interface XDCompartment : NSObject <NSCoding>
{
    XDCompartmentGraphic *_compartmentGraphic;
    id _identifier;
    NSImage *_iconImage;
    NSString *_label;
    NSColor *_backgroundColor;
    id _objectValue;
    XDCompartmentItem *_compartmentItem;
    struct CGSize _compartmentItemMinSize;
    struct _XDCompartmentFlags _cFlags;
}

+ (Class)defaultCompartmentItemClass;
+ (void)initialize;
- (id)backgroundColor;
- (id)compartmentGraphic;
- (id)compartmentItem;
- (id)compartmentItemAtIndex:(long long)arg1;
- (struct CGSize)compartmentItemMinSize;
- (void)dealloc;
- (BOOL)drawsBackground;
- (void)encodeWithCoder:(id)arg1;
- (id)iconImage;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEditable;
- (id)label;
- (id)objectValue;
- (void)setBackgroundColor:(id)arg1;
- (void)setCompartmentGraphic:(id)arg1;
- (void)setCompartmentItemMinSize:(struct CGSize)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setObjectValue:(id)arg1;

@end

