//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface DSAToken : NSManagedObject
{
    id _tokenIvars;
}

+ (id)descriptionForIDInformation:(id)arg1;
+ (id)standardizedLanguageForKey:(id)arg1;
+ (id)tokenTypeCategoryForKey:(id)arg1 forLocalization:(id)arg2;
- (id)URL;
- (id)_lastRemovalStringForArchitectures:(id)arg1 fromRemovedVersions:(id)arg2;
- (id)_metainfoCreatingIfMissing:(BOOL)arg1;
- (id)abstract;
- (id)abstractAsHTML;
- (id)anchor;
- (id)apiLanguage;
- (id)availabilityInformationAsOfDistributionVersion:(CDStruct_6df46f26)arg1 forArchitectures:(id)arg2;
- (id)availabilityVersionStatement;
- (id)declaration;
- (id)declarationAsHTML;
- (id)declaredIn;
- (id)declaredInFrameworkName;
- (id)declaredInHeaderURL;
- (id)deprecatedInVersion;
- (id)deprecatedInVersionString;
- (id)deprecatedInVersions;
- (id)deprecationSummary;
- (id)deprecationSummaryAsHTML;
- (id)deprecationVersionStatement;
- (id)deprecationVersionStatementAsOfVersion:(id)arg1;
- (id)description;
- (id)distributionName;
- (id)docSet;
- (id)file;
- (id)filePath;
- (id)introducedInVersion;
- (id)introducedInVersionString;
- (id)introducedInVersions;
- (id)mergedRelatedTokens;
- (id)name;
- (id)parametersInfo;
- (id)parentNode;
- (id)relatedDocuments;
- (id)relatedGroups;
- (id)relatedSampleCode;
- (id)relatedTokens;
- (id)removedAfterVersion;
- (id)removedAfterVersionString;
- (id)removedAfterVersions;
- (id)returnValueAbstractAsHTML;
- (id)returnValueInfo;
- (id)scope;
- (id)seeAlsoRelatedTokens;
- (void)setAbstract:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setDeclaration:(id)arg1;
- (void)setDeclaredIn:(id)arg1;
- (void)setDeprecatedInVersion:(id)arg1;
- (void)setDeprecatedInVersions:(id)arg1;
- (void)setDeprecationSummary:(id)arg1;
- (void)setFile:(id)arg1;
- (void)setIntroducedInVersion:(id)arg1;
- (void)setIntroducedInVersions:(id)arg1;
- (void)setParametersInfo:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setRelatedDocuments:(id)arg1;
- (void)setRelatedGroups:(id)arg1;
- (void)setRelatedSampleCode:(id)arg1;
- (void)setRemovedAfterVersion:(id)arg1;
- (void)setRemovedAfterVersions:(id)arg1;
- (void)setReturnValueInfo:(id)arg1;
- (void)setSeeAlsoRelatedTokens:(id)arg1;
- (void)setTokenName:(id)arg1;
- (id)tokenName;
- (id)tokenTypeCategory;
- (id)type;
- (id)url;

@end
