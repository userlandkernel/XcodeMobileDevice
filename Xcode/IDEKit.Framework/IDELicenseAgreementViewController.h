//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTLicenseAgreementHelper, NSAttributedString, NSTextField, NSTextView, NSView;

@interface IDELicenseAgreementViewController : NSViewController
{
    DVTLicenseAgreementHelper *_licenseAgreementHelper;
    int _agreementStatus;
    NSAttributedString *_licenseAgreement;
    NSTextView *_licenseAgreementTextView;
    NSView *_foregroundContentView;
    BOOL _licenseOnly;
    NSTextField *_licenseSubtitle;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_agreeToLicense;
- (id)_licenseSavePanel;
- (void)_writeLicenseTextToURL:(id)arg1;
- (void)agreeToLicense:(id)arg1;
@property int agreementStatus; // @synthesize agreementStatus=_agreementStatus;
- (void)disagreeWithLicense:(id)arg1;
@property(retain) NSView *foregroundContentView; // @synthesize foregroundContentView=_foregroundContentView;
- (id)initWithDefaultNib:(BOOL)arg1;
- (BOOL)isGMLicense;
@property __weak NSTextField *licenseSubtitle; // @synthesize licenseSubtitle=_licenseSubtitle;
- (void)loadView;
- (void)save:(id)arg1;
- (BOOL)shouldShowLicenseAgreement;

@end

