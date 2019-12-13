//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/PBXWizardProxies-Protocol.h>

@class NSDictionary, NSString;

@interface PBXTargetTemplateClonerWizardProxy : NSObject <PBXWizardProxies>
{
    NSString *_templatePListPath;
    NSString *_templateName;
    NSDictionary *_templateInfoDict;
}

+ (id)proxyWithTemplatePListPath:(id)arg1 templateName:(id)arg2;
- (id)_defaultIcon;
- (id)categorizedWizardNames;
- (void)dealloc;
- (id)icon;
- (id)initWithTemplatePListPath:(id)arg1 templateName:(id)arg2;
- (id)instantiateWizardWithParent:(id)arg1;
- (id)templateInfoDict;
- (id)valueForPlistKey:(id)arg1;
- (id)wizardDescription;

@end
