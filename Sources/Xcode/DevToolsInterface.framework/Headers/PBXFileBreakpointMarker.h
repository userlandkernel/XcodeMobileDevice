//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXRulerMarker.h>

@interface PBXFileBreakpointMarker : PBXRulerMarker
{
}

+ (void)initialize;
- (void)_singleClickAction:(id)arg1;
- (void)dealloc;
- (void)didDoubleClickWithModifierFlags:(unsigned long long)arg1;
- (void)didMove;
- (void)didSingleClickWithModifierFlags:(unsigned long long)arg1;
- (void)edit;
- (id)image;
- (id)initWithRulerView:(id)arg1 location:(double)arg2 representedObject:(id)arg3;
- (unsigned long long)supportedModifiers;
- (long long)supportedTypes;
- (id)tooltipString;

@end
