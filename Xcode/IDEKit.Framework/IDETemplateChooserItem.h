//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class IDETemplateChooserSelectionDrawingView, NSImage, NSImageView, NSString, NSTextField;

@interface IDETemplateChooserItem : NSCollectionViewItem
{
    IDETemplateChooserSelectionDrawingView *_iconSelectionDrawingView;
    NSImageView *_iconImageView;
    IDETemplateChooserSelectionDrawingView *_nameSelectionDrawingView;
    NSTextField *_nameTextField;
}

+ (id)keyPathsForValuesAffectingIcon;
+ (id)keyPathsForValuesAffectingName;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)awakeFromNib;
@property(readonly) NSImage *icon;
@property(nonatomic) __weak NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak IDETemplateChooserSelectionDrawingView *iconSelectionDrawingView; // @synthesize iconSelectionDrawingView=_iconSelectionDrawingView;
@property(readonly) NSString *name;
@property(nonatomic) __weak IDETemplateChooserSelectionDrawingView *nameSelectionDrawingView; // @synthesize nameSelectionDrawingView=_nameSelectionDrawingView;
@property(nonatomic) __weak NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void)setSelected:(BOOL)arg1;
- (void)updateColors;

@end

