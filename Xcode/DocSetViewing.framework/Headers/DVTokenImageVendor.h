//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface DVTokenImageVendor : NSObject
{
    NSImage *_classImage;
    NSImage *_methodImage;
    NSImage *_propertyImage;
    NSImage *_constImage;
    NSImage *_typeImage;
    NSImage *_functionImage;
    NSImage *_globalImage;
    NSImage *_protocolImage;
    NSImage *_macroImage;
    NSImage *_bindingImage;
    NSImage *_structImage;
}

+ (id)sharedVendor;
@property(retain, nonatomic) NSImage *_bindingImage; // @synthesize _bindingImage;
@property(retain, nonatomic) NSImage *_classImage; // @synthesize _classImage;
@property(retain, nonatomic) NSImage *_constImage; // @synthesize _constImage;
@property(retain, nonatomic) NSImage *_functionImage; // @synthesize _functionImage;
@property(retain, nonatomic) NSImage *_globalImage; // @synthesize _globalImage;
@property(retain, nonatomic) NSImage *_macroImage; // @synthesize _macroImage;
@property(retain, nonatomic) NSImage *_methodImage; // @synthesize _methodImage;
@property(retain, nonatomic) NSImage *_propertyImage; // @synthesize _propertyImage;
@property(retain, nonatomic) NSImage *_protocolImage; // @synthesize _protocolImage;
@property(retain, nonatomic) NSImage *_structImage; // @synthesize _structImage;
@property(retain, nonatomic) NSImage *_typeImage; // @synthesize _typeImage;
- (id)bindingImage;
- (id)classImage;
- (id)constImage;
- (id)functionImage;
- (id)globalImage;
- (id)macroImage;
- (id)methodImage;
- (id)propertyImage;
- (id)protocolImage;
- (id)structImage;
- (id)typeImage;

@end
