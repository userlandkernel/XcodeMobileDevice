//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class IDEAppIDItemIdentifiersItemModelSet;

@interface IDEEvaluatedStringFormatter : NSFormatter
{
    IDEAppIDItemIdentifiersItemModelSet *_identifiers;
}

- (void).cxx_destruct;
- (id)_titleForContainerID:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)editingStringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
@property(readonly) IDEAppIDItemIdentifiersItemModelSet *identifiers; // @synthesize identifiers=_identifiers;
- (id)initWithIdentifiers:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
