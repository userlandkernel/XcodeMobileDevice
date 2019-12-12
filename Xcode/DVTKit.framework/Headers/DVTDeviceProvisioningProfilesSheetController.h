//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPagingSheetWindowController.h>

@class DVTBorderedView, DVTDevice, DVTGradientImageButton, DVTTableView, NSArray, NSArrayController;

@interface DVTDeviceProvisioningProfilesSheetController : DVTPagingSheetWindowController
{
    DVTDevice *_device;
    DVTTableView *_profileTable;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    DVTBorderedView *_tableBorder;
    DVTBorderedView *_buttonBorder;
    NSArrayController *_profilesArrayController;
    NSArray *_provisioningProfiles;
}

- (void).cxx_destruct;
@property(retain) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
- (void)addProfile:(id)arg1;
@property(retain) DVTBorderedView *buttonBorder; // @synthesize buttonBorder=_buttonBorder;
- (void)delete:(id)arg1;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
- (void)done:(id)arg1;
- (id)initWithDevice:(id)arg1;
@property(retain) DVTTableView *profileTable; // @synthesize profileTable=_profileTable;
@property(retain) NSArrayController *profilesArrayController; // @synthesize profilesArrayController=_profilesArrayController;
@property(retain) NSArray *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
- (void)removeProfiles:(id)arg1;
- (void)selectAll:(id)arg1;
@property(retain) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowDidLoad;

@end

